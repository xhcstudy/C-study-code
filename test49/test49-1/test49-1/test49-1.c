#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//字符串 + 内存函数的介绍
//求字符串长度
//strlen
//长度不受限制的字符串函数
//strcpy
//strcat
//strcmp
//长度受限制的字符串函数介绍
//strncpy
//strncat
//strncmp
//字符串查找
//strstro 
//strtok
//错误信息报告
//strerror
//字符操作
//内存操作函数
//memcpy
//memmove
//memset
//memcmp


//strlen
//size_t strlen(const char * str);
//字符串以'\O'作为结束标志，strlen函数返回的是在字符串中'\0’前面出现的字符个数(不包含'\0')。
//参数指向的字符串必须要以'\0’结束。
//注意函数的返回值为size_t，是无符号的(易错)
//学会strlen函数的模拟实现
#include <string.h>
#include <assert.h>
//1.计数器
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	size_t count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}

//2.递归
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//3.指针 - 指针
//
//int main()
//{
//	//int len = my_strlen("abcdef");
//	////错误示范
//	////char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' }; 
//	////int len = strlen(arr);
//	//printf("%d\n",len);
//	//返回无符号数   易错！
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//}


//strcpy.
//char* strcpy(char * destinaion, const char * source);
//Copies the C string pointed by source into the array pointed by destination, including the terminating null character(and stopping at that point).
//源字符串必须包含'\0'。
//会将源字符串中的'\0'拷贝到目标空间。
//目标空间必须足够大，以确保能存放源字符串。
//目标空间必须可变。
//学会模拟实现。
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//错误示范  源字符串必须包含'\0',否则拷贝不知道什么时候停止，有可能造成越界访问
//	//char arr2[] = { 'b', 'i', 't' };
//	//错误示范  目标空间必须足够大，否则会越界访问
//	//char arr1[] = "a";
//	//char arr2[] = "bit";
//	//错误示范  目标空间必须可变
//	//char* arr1 = "abcdefghi"; 常量字符串不可改变
//	//char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	return 0;
//}


//strcat - 字符串追加
//char* strcat(char * destination, const char * source );
//Appends a copy of the source string to the destination string.The terminating null character in
//destination is overwritten by the first character of source, and a null-character is included at
//the end of the new string formed by the concatenation of both in destination.
//源字符串必须以'\0’结束。
//目标空间必须有足够的大，能容纳下源字符串的内容。
//目标空间必须可修改。
//字符串自己给自己追加，如何?
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	//1.找到目的字符串'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.追加
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	return 0;
}


