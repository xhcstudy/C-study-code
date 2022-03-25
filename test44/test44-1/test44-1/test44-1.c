#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;	
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6,12
//	return 0;
//}

//写一个函数，可以逆序一个字符串的内容
//#include <assert.h>
//#include <string.h>
//char* str_reverse(char* str)
//{
//	int len = strlen(str);
//	assert(str != NULL);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char temp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = temp;
//		left++;
//		right--;
//	}
//	return str;
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s",arr);
//	gets(arr);
//	char* str = str_reverse(arr);
//	printf("%s\n", str);
//	return 0;
//}

//计算求和  求Sn = a + aa + aaa + aaaa + aaaaa + aaaaaa的前六项之和，其中a是一个数字
//int get_sum(int a, int n)
//{
//	int sum = 0;
//	int i = 0;
//	int ret = 0;//每一项
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	sum = get_sum(a, n);
//	printf("%d\n",sum);
//	return 0;
//}

//打印水仙花数(自幂数)   水仙花数是指一个n位数，其各位数字的n次方之和恰好等于该数本身，如153 = 1^3 + 5^3 + 3^3,则153是一个水仙花数
//求出0-100000之间的所有水仙花数并输出
//求位数
#include <math.h>
//int get_wei(int n)
//{
//	int count = 0;
//	if (n > 9)
//	{
//		return 1 + get_wei(n / 10);
//	}
//	return 1;
//}
//
////求每一位
//int get_bit(int m,int n)
//{
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = m % 10;
//		m = m / 10;
//	}
//	return ret;
//}
//
////求每位的n次方之和
//int get_sum(int i, int n)
//{
//	int ret = 0;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = get_bit(i, j);//求出了i的每一位
//		sum = sum + (int)pow(ret,n);//计算次方用pow函数  需要#include <math.h>
//	}
//	return sum;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int sum = 0;
//		//判断i是否为水仙花数(自幂数)
//		//1.计算i的位数 - n位数
//		int n = 0;
//		n = get_wei(i);
//		//2.计算i的每一位的n次方之和
//		sum = get_sum(i, n);
//		//3.比较i
//		if (i == sum)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//打印菱形
//#include <string.h>
//void Print_Diamond(int line)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < line; i++)//打印上半部分
//	{
//		for (j = 0; j < line - 1 - i; j++)//打印每行的空格
//		{
//			printf(" ");
//		}
//		for (k = 0; k < 2 * i + 1; k++)//打印每行的*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)//打印下半部分
//	{
//		for (j = 0; j <= i; j++)//打印每行空格S
//		{
//			printf(" ");
//		}
//		for (k = 2 * (line - 1) ; k > 2 * i + 1; k--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int line = 0;
//	scanf("%d",&line);//一半的行数
//	Print_Diamond(line);
//	return 0;
//}