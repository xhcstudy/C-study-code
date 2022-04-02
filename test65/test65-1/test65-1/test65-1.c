#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
//常见的动态内存错误

//1.对NULL的解引用操作
//int main()
//{
//	int* p = malloc(40);
//	//万一malloc失败了，p就被赋值位NULL
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//2.对动态开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//4.使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*p++ = i;
//		}
//	}
//	//p指向的空间已经发生变化 
//	free(p);
//	p = null;
//	return 0;
//}

//5.对同一块动态内存多次释放    free完之后 将使用的指针p 立刻置为NULL  可以有效防止 多次释放的问题
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		;
//	}
//	free(p);
//	//.....
//	free(p);
//	return 0;
//}

//6.对动态开辟的空间忘记释放(内存泄露)
#include <windows.h>
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}


//几个经典的笔试题
//1.
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//程序崩溃 因为GetMemory函数结束之后str 仍是空指针 在strcpy中 会造成越界访问
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//1.程序运行会崩溃
//2.程序存在内存泄露的问题  
//str以值传递的形式给p   p是GetMemory函数的形参，只能函数内部有效
//等GetMemory函数返回之后，动态开辟内存尚未释放，并且无法找到，所以会造成内存泄露

//修改1.
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	if (str == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		strcpy(str, "hello world");
//		printf(str);
//	}
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//修改2.
char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory(str);
	if (str == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		strcpy(str, "hello world");
		printf(str);
	}
	free(str);
	str = NULL;
}

int main()
{
	Test();
	return 0;
}