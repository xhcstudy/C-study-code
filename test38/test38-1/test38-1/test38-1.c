#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));
//第一个参数 待排序数组的首元素地址
//第二个参数 待排序数组的元素个数
//第三个参数 待排序数组的每个元素的大小(字节数)
//第四个参数 是函数指针,传过去的其实是比较两个元素所用函数的地址(该函数需要使用者自己实现)
//            函数指针的两个参数是：带比较的两个元素的地址   const void* e1   const void* e2

struct Stu
{
	char name[20];
	short age;
};
typedef struct Stu Stu;

//模拟实现qsort
//实现Bubble_Sort函数的程序员，不知道待比较的两个元素类型
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
	for (i = 0; i < sz - 1; i++)//趟数
	{
		//每一趟的比较
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个数的比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
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
	//使用Bubble_Sort的程序员一定知道自己排序的是什么数据
	//就应该知道如何比较待排序数组中的元素
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