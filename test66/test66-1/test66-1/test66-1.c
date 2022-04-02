#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


//2.返回栈空间地址的问题
//char* GetMemory(void)
//{
//	//加上static p的生命周期变长 静态区
//	static char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str); //函数调用完成之后p被释放 str非法访问内存   打印随机值
//}
//int main()
//{
//	Test();
//	return 0;
//}

//3.
//问题:没有释放动态开辟的内存
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//free(str);
//	//str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//修改
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	if (str == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		strcpy(str, "hello");
//		printf(str);
//	}
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//4.
//问题:free之后没有将str置为NULL，之后再对str指向的地址进行操作，非法访问内存
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//修改
void Test(void)
{
	char* str = (char*)malloc(100);
	if (str == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		strcpy(str, "hello");
	}
	free(str);
	str = NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}