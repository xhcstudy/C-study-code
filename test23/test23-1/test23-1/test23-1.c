#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//return ֻ�ܷ���һ����
//ð������
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

//����һ���������飬��ɶ�����Ĳ���
//1.ʵ�ֺ���Init()��ʼ������ȫΪ0
//2.ʵ��printf()��ӡ�����ÿ��Ԫ��
//3.ʵ��reverse()�����������Ԫ�ص�����
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

//��������  ������A�е����ݺ�����B�е����ݽ��н���������һ����
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

int i;//ȫ�ֱ�������ʼ�� - 0
int main()
{
	i--;
	if (i > sizeof(i))//sizeof() �������/������ռ�ڴ�Ĵ�С >= 0 �൱��һ���޷�����   �������޷��������м���ͱȽϴ�Сʱ ���λᱻת����Ϊ�޷����� -1���޷������ر�� ���������Ǵ���
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}