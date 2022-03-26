#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换1瓶汽水，给20元，可以喝多少汽水(编程实现)
//int get_total(int n)
//{
//	int total = 0;
//	int empty = 0;
//	if (n == 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = 2 * n - 1;// 2个空瓶可以换一瓶汽水   说明空瓶价值0.5  但是手上最终会留一个空瓶     20 / 0.5 = 40 - 1
//	}
//	////买回来的直接喝掉
//	//total = n;
//	//empty = n;
//	////换的汽水
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	return total;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	printf("%d\n", get_total(n));
//}

//调整数组，使奇数全部位于偶数前面
void Move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//前半部分找偶数，后半部分找奇数
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
}
void Print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[] = { 1, 3, 4, 5, 5, 6, 8, 8, 8, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Move(arr, sz);
	Print_arr(arr, sz);
}