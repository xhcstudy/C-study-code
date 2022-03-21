#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//指针进阶
//1.字符指针
//2.数组指针
//3.指针数组
//4.数组传参和指针传参
//5.函数指针
//6.函数指针数组
//7.指向函数指针数组的指针
//8.回调函数
//9.指针和数组面试题的解析

//1.字符指针
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n",arr);
//	printf("%s\n",pc);
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//abcdef为常量表达式,不能被修改  相当于将首字符的地址a的地址赋给p
//	printf("%c\n",*p);
//	printf("%s\n",p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef"; //因为这里的abcdef是常量表达式  所以虽然创建了两个变量  但实际上两个变量的内容abcdef共用一个地址  和数组不同
//	const char* p2 = "abcdef"; //实际上p1和p2的地址不相同   但是存储的内容都相同   都是abcdef中a的首地址
//	//if (p1 == p2)  // 打印hehe ()中p1和p2内容都相同,都是abcdef中a的首地址对应的一个32位的数字  判断相等成立
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	//if (arr1 == arr2)  arr1 和 arr2 表示两个数组的元素首地址   首地址不相同  打印haha
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	return 0;
//}

//3.指针数组  是数组 用来存放指针
//int main()
//{
//	int arr[10];//整形数组
//	char ch[5];//字符数组
//	int* parr[4];//存放整形指针的数组 - 指针数组
//	char* pch[5];//存放字符型指针的数组 - 指针数组
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*(arr[i]));
//	}
//	return 0;
//}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 2, 3, 4, 5, 6 };
	int arr3[] = { 3, 4, 5, 6, 7 };
	int* parr[] = { arr1, arr2, arr3 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ",*(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}