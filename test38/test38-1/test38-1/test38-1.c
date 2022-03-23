#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));
//��һ������ �������������Ԫ�ص�ַ
//�ڶ������� �����������Ԫ�ظ���
//���������� �����������ÿ��Ԫ�صĴ�С(�ֽ���)
//���ĸ����� �Ǻ���ָ��,����ȥ����ʵ�ǱȽ�����Ԫ�����ú����ĵ�ַ(�ú�����Ҫʹ�����Լ�ʵ��)
//            ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ   const void* e1   const void* e2

struct Stu
{
	char name[20];
	short age;
};
typedef struct Stu Stu;

//ģ��ʵ��qsort
//ʵ��Bubble_Sort�����ĳ���Ա����֪�����Ƚϵ�����Ԫ������
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *(buf1 + i);
		*(buf1 + i) = *(buf2 + i);
		*(buf2 + i) = temp;
	}
}

void Bubble_Sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)//����
	{
		//ÿһ�˵ıȽ�
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//�������ıȽ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1) - (*(int*)e2);
}

void test1()
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��Bubble_Sort�ĳ���Աһ��֪���Լ��������ʲô����
	//��Ӧ��֪����αȽϴ����������е�Ԫ��
	Bubble_Sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((Stu*)e1)->age - ((Stu*)e2)->age;
}

void test2()
{
	Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	Bubble_Sort(s,sz,sizeof(s[0]),cmp_stu_by_age);
}

int main()
{
	test1();
	test2();
	return 0;
}