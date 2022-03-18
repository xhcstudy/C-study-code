#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//return 只能返回一个数
//冒泡排序
//void Bubble_Sort(int* arr,int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 4, 6, 7, 11, 5, 9, 8,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	Bubble_Sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//创建一个整形数组，完成对数组的操作
//1.实现函数Init()初始化数组全为0
//2.实现printf()打印数组的每个元素
//3.实现reverse()函数完成数组元素的逆置
//void my_print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//
//void reserve(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	for (i = 0; i < sz / 2; i++)
//	{
//		int temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		right -= 1;
//		left += 1;
//	}
//}
//
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_print(arr,sz);
//	reserve(arr,sz);
//	my_print(arr, sz);
//	Init(arr,sz);
//	my_print(arr, sz);
//	return 0;
//}

//交换数组  将数组A中的内容和数组B中的内容进行交换（数组一样大）
//void Swap(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//}
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[10] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	Swap(arr1, arr2, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//}

int i;//全局变量不初始化 - 0
int main()
{
	i--;
	if (i > sizeof(i))//sizeof() 计算变量/类型所占内存的大小 >= 0 相当于一个无符号数   整数与无符号数进行计算和比较大小时 整形会被转化成为无符号数 -1的无符号数特别大 所以这里是大于
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}