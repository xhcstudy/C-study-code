#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//1.计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int jiecheng = 1;
//	printf("请输入要计算的数n：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		jiecheng = jiecheng * i;
//	}
//	printf("n的阶乘的值为:%d\n", jiecheng);
//	return 0;
//}

//2.计算n的阶乘和  1!+2+...+n!
//简化版本
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int n = 0;
//	int sum = 0;
//	int jiecheng = 1;
//	printf("请输入要计算的数n：");
//	scanf("%d", &n);
//	k = n;
//	for (j = 1; j <= k; j++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			jiecheng = jiecheng * i;
//		}
//		n--;
//		sum = sum + jiecheng;
//		jiecheng = 1;
//	}
//	printf("n的阶乘和的值为:%d\n", sum);
//	return 0;
//}

//3.在一个有序数组中查找具体的某个数字n。编写int binsearch(int x,int v[],int n);功能:在v[0] <= v[1] <= v[2] <= ... <= v[n-1]的数组中查找x.
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//		//写一个代码，在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组元素个数
//	for (i = 0; i < sz; i++)//较为繁琐，最坏要查找n次
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下表为:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}

//折半查找算法  或者叫二分查找算法
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int right = sz - 1;//右下标
//	int left = 0;//左下标
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//	    else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{ 
//		printf("找不到\n");
//	}
//	return 0;
//}

//4.编写代码，演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "yang ruo li i love you";
//	char arr2[] = "                      ";
//	int right = strlen(arr1) - 1;
//	int left = 0;
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);//休息一秒
//		system("cls");// 执行系统命令的一个函数-cls- 清空屏幕
//	}
//	return 0;
//}
//5.编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序。）
int main()
{
	char arr[] = {0};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码 ->");
		scanf("%s", arr);
		if (strcmp(arr, "123456") == 0)// ==不能用来比较两个字符串是否相等，应该使用一个库函数 - strcmp
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("输入错误，请重试\n");
		}
	}
	if (i = 3)
	{
		printf("错误三次，退出程序\n");
	}
	return 0;
}