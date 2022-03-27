#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串
//判断是不是子集的方法
//int is_left_move(char* str1, char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	//排除字符数不等仍是子集的情况
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//1.再str1字符串中追加一个str1字符串
//	//strcat - 字符串追加 - 不能用于自己追加自己
//	//strncat
//	//strcat(str1,str1);
//	strncat(str1,str1,len1);
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr - 找子串的
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (1 == ret)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[30] = "abc";
//	char arr2[] = "dcef";
//	strcat(arr1,arr2);
//	printf("%s\n",arr1);//abcdef
//	return 0;
//}

//题目名称:杨氏矩阵题目内容 :
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求 : 时间复杂度小于O(N);
int Find_Num(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int k = 0;
	int x = 3;
	int y = 3;
	scanf("%d",&k);
	//返回型参数 x y
	int ret = Find_Num(arr, k, &x, &y);//传址过去 能改变x和y  求出找到时的下标
	if (ret == 1)
	{
		printf("找到了,下标是%d %d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}
