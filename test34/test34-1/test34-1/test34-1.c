#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���������ָ�����
//1.һά����
//void test1(int arr[])//ok?  Y
//{
//
//}
//void test1(int arr[10])//ok?  Y
//{
//
//}
//void test1(int* arr)//ok?  Y 
//{
//
//}
//void test2(int* arr[20])//ok?  Y  ����20��ʡ��
//{
//
//}
//void test2(int** arr)//ok?  Y  ����ָ��
//{
//
//}
//int main()
//{
//	int arr1[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test1(arr1);
//	test2(arr2);
//	return 0;
//}

//2.��ά����
//void test(int arr[3][5])//�в���ʡ��
//{ }
//void test(int arr[][5])
//{ }
//void test(int *arr)//error   ��ά�������Ԫ�ص�ַ  �ǵ�һ��һά����ĵ�ַ
//{ }
//void test(int** arr)//error
//{ }
//void test(int (*arr)[5])//OK
//{ }
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//3.һ��ָ��
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}

//˼��:��һ�������Ĳ���������һ��ָ���ʱ�򣬺����ܽ���ʲô����
//void test1(int* p)
//{ }
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1);//ok
//	return 0;
//}

//����ָ�봫��
//void test(int** pp)
//{ }
//int main()
//{
//	int n = 10;
//	int*p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}
//˼��:������������  ����û��������ʽ�Ĵ���   �����Դ����һ��ָ�������������   int* arr[10] = { 0 }   ������test(arr);

//����ָ��
//����ָ�� - ָ�������ָ��
//����ָ�� - ָ������ָ�� - ��ź�����ַ��һ��ָ��
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//&arr
//	//arr
//	//printf("%d\n",Add(a,b));
//	//&������ �� ���������Ǻ����ĵ�ַ
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int (*pa)(int, int) = Add;
//	printf("%d\n",(*pa)(2,3));
//	return 0;
//}

//��ͬ�����ĵ�ַҲ����ͬ
void Print(char* str)
{
	printf("%s\n",str);
}
int main()
{
	void (*p)(char*) = Print;
	(*p)("hello bit");
	return 0;
}