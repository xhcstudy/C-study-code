#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//数组指针  -  指针
//int main()
//{
//	int* p = NULL;//p是整形指针 - 指向整形的指针 - 可以存放整形的地址
//	char* pc = NULL;//pc是字符型指针 - 指向字符的指针 - 可以存放字符的地址
//	//数组指针 - 指向数组的指针 - 可以存放数组的地址
//	//int arr[10] = { 0 };
//	//arr - 首元素地址
//	//&arr[0] - 首元素地址
//	//&arr - 数组的地址
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int (*p)[10]= &arr;
//	//上面的p就是数组指针
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*p)[5] = &arr;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",(*p)[i]);//*p == arr
//	}
//	return 0;
//}

void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			//printf("%d ",*(*(p + i) + j));
			printf("%d ",(*(p + i))[j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	return 0;
}