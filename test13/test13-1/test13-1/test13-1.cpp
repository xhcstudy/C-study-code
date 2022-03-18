#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//数组
//数组是一种相同类型元素的集合  tpye_t  arr_name [const_n(常量表达式)];
#include<string.h>
//int main()
//{
//	//创建一个数组-存放整形-10个
//	int arr1[10] = {1,2,3};//不完全初始化,剩下元素默认初始化为0
//	char arr2[5 + 3] = {'a',98};
//	char arr3[5] = "ab";//ok
//	char arr4[] = "abcdef";//默认放7个元素
//  char arr5[] = {'a','b','c'}//放3个元素
//	printf("%d\n",sizeof(arr4));//  7   sizeof(arr4)计算数组arr4所占空间的大小'\0'也不会排除在外  char类型元素所占空间大小为一个字节
//	printf("%d\n",strlen(arr4));//  6   strlen是计算'\0'之前的字符串长度 '\0' 不算在内
//	//int n = 5;
//	//char ch[n];//err   []中不能是变量只能是常量
//	return 0;
//}

//int main()
//{
//	char arr1[] = {'a','b','c'};
//	char arr2[] = "abc";
//	printf("%d\n", sizeof(arr1));//3
//	printf("%d\n", sizeof(arr2));//4
//	printf("%d\n", strlen(arr1));//随机数 因为arr2中没有'\0'  直到随机到'\0'之后停止
//	printf("%d\n", strlen(arr2));//3
//	return 0;
//}

//一维数组的使用  []  下标引用操作符  数组元素的访问操作符
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = {1,2,3,4,5,6,7,8,9,0};
//	//printf("%c\n",arr1[3]);//d
//	int i = 0;
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	int len = strlen(arr1);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ",arr1[i]);//arr[i] 定义数组的时候[]中不能放变量，但是访问元素用变量没问题
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//	return 0;
//}

//一维数组在内存中的存储
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n",i,&arr[i]);//每个元素之间地址 16进制相差4（int 占4个字节）说明一维数组是在内存中连续存放的
//	}
//	return 0;
//}

//二维数组的创建和初始化
//int main()
//{
//	int arr1[3][4] = { { 1, 2, 3 },{ 4, 5} };
//	char arr2[5][6];
//	int arr3[][4] = {1,2,3,4,5,6,7,8};//列不能省略
//	return 0;
//}

//二维数组的使用  依然是通过下标来使用
//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%-4d",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//二维数组在内存中的存储   二维数组可以想象成为一维数组的数组
int main()
{
	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
	int i = 0;
	int j = 0;
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 4; j++)
			{
				printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);//二维数组在内存中也是连续存放的
			}
		}
	return 0;
}