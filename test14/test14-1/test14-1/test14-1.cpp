#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//数组作为函数参数
//冒泡排序，将一个整形数组进行排序
//void bubble_sort(int arr[],int sz)//*******不能光传数组，因为数组传过去只传首元素地址，元素个数也要传过去********(已经搞错两次了)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)//一共需要排sz - 1次完成排序
//	{
//		int flag = 1;//假设数组已经排序完毕   设置flag减少不必要的排序操作  如果已经排序完毕不需要再继续操作下去了
//		for (j = 0; j < sz - 1 - i/*排完一轮之后减少掉一个需要排的数字*/; j++)  //每次排完一轮，最大的数排到最右边
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;//并未完成排序
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {1,4,5,6,7,11,9,2,3};
//	//对arr排序，将数组排为升序
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//数组名是什么？   数组首元素地址 
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	//但是有例外 
	//1.sizeof(arr)  sizeof的()内中的数组名是表示整个数组  计算整个数组的大小 - 单位字节
	//2. &数组名，数组名代表整个数组，  &数组名 取出的是整个数组的地址
	printf("%p\n",arr);//和下面的结果一样  说明数组名就是数组首元素地址
	printf("%p\n", arr + 1);
	printf("%p\n",&arr[0]);
	printf("%p\n", &arr[0] + 1);
	printf("%d\n",*arr);//1
	printf("%p\n",&arr);
	printf("%p\n", &arr + 1);
	return 0;
}