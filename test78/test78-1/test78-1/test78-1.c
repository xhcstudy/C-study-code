#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//编译

//预编译(预处理) - 文本操作
//1.#include
//头文件的包含
//2.注释删除
//使用空格来替换注释
//3.#define
//#define MAX 100  会将所有MAX替换成100
//linux 系统下 gcc -E test.c  生成一个 test.i 文件   会将#include的头文件内容包含放到.c文件中  并且删除注释，用空格替换注释  #define MAX 100  会将所有MAX替换成100


//编译 - 把C语言代码翻译成汇编代码
//语法分析
//词法分析
//语义分析
//符号汇总
//linux 系统下 gcc -S test.i  生成一个 test.s 文件


//汇编 - 把汇编代码转化为二进制指令
//形成符号表
//将汇编文件转换为目标文件，目标文件里已经是存放的二进制代码了
//linux 系统下 gcc -c test.s  生成一个 test.o 文件

//链接
//1.合并段表
//2.符号表的合并和符号表的重定位


//运行环境
//程序的执行过程
//1,.程序必须载入内存中。在有操作系统的环境中; 一般这个由操作系统完成。
//在独立的环境中，程序的载入必须由手工安排，也可能是通过可执行代码置入只读内存来完成。
//2.程序的执行便开始。接着便调用main函数。
//3.开始执行程序代码。这个时候程序将使用一个运行时堆栈(stack)，存储函数的局部变量和返回地址。
//程序同时也可以使用静态(static)内存, 存储于静态内存中的变量在程序的整个执行过程一直保留他们的值。
//4.终止程序。正常终止main函数; 也有可能是意外终止。


//预处理详解


//预定义符号
//__FILE__ 

//int main()
//{
//	printf("%s\n", __FILE__);
//	return 0;
//}

//__LINE__
//int main()
//{
//	printf("%d\n", __LINE__);
//	return 0;
//}

//__DATE__
//int main()
//{
//	printf("%s\n", __DATE__);
//	return 0;
//}

//__TIME__
//int main()
//{
//	printf("%s\n", __TIME__);
//	return 0;
//}

//__STDC__   如果编译器遵循ANSI C,其值为1，否则未定义

//写日志文件
//int main()
//{
//	char arr[] = "yangruolibukaixin";
//	FILE* pf = fopen("log.txt", "w");
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	if (NULL == pf)
//	{
//		perror("__LINE__:");
//	}
//	//
//	for (i = 0; i < sz; i++)
//	{
//		fputc(arr[i], pf);
//	}
//	fprintf(pf, "\nfile:%s\nline:%d\ndata:%s\ntime:%s\n", __FILE__, __LINE__, __DATE__, __TIME__);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#define - 预处理指令  还有 #include  #pragma  #if   #endif   #ifdef   #line
//#define 定义标识符
#define MAX 100
#define STR "hehe"
#define reg register
int main()
{
	reg int a;
	int max = MAX;
	printf("%d\n", max);
	printf("%s\n", STR);
	return 0;
}