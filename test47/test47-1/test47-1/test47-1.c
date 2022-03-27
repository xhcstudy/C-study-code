#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a[5] = { 5, 4, 3, 2, 1 };
//	int* ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));// 4 , 1
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int *ptr1 = (int*)(&aa + 1);
//	int *ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));// 1 , 6
//	return 0;
//}

//题目内容:
//实现一个函数, 可以左旋字符串中的k个字符。
//例如 :
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
#include <string.h>
#include <assert.h>
//1.暴力求解法
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int len = strlen(arr);
//	int i = 0;
//	//执行k次循环完成
//	for (i = 0; i < k; i++)
//	{
//		//1.将第一个元素拿出来
//		char temp = arr[0];
//		//2.然后将其他元素往前移动一位
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		//3.将第一个元素放到最后面
//		arr[len - 1] = temp;
//	}
//}

//2.三步翻转法
//AB CDEF
//BA FEDC
//CDEFAB
void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

void left_move(char* arr, int k)
{
	assert(arr != NULL);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr, arr + k - 1);//逆序左边
	reverse(arr + k, arr + len - 1);//逆序右边
	reverse(arr, arr + len - 1);//逆序整体
}

//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 0;
//	scanf("%d",&k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串
int is_left_move(char* s1, char* s2)
{
	assert(s1 != NULL);
	assert(s2 != NULL);
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 != len2)
	{
		return 0;
	}
	int i = 0;
	//1.穷举法
	for (i = 0; i < len1; i++)
	{
		left_move(s1, 1);
		if (strcmp(s2, s1) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (1 == ret)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}
