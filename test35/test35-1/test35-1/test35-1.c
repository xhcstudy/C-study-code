#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// int(*)[10]  这是一个数组指针类型   int(*)(int*)  这是一个函数指针类型
//代码1 
//(*(void(*)())0)();  void(*)() - 函数指针类型  (void(*)())0 将0强制类型转换位函数指针类型  
// *(void(*)())0 解引用这个类型 相当于找到这个函数    (*(void(*)())0)()最后就是调用这个函数
//代码2
//void (*signal(int , void(*)(int)))(int);//其实就是一次函数声明   返回类型是 void (*) (int) 是函数指针类型    signal 是 函数名   (int , void(*)(int)) 是函数参数
//但是不能写成void(*)(int)  signal  (int , void(*)(int)); 这种形式
//但是可以简化  如下:
//typedef void(*pfun_t)(int);//将void (*) (int) 类型 tpyedef 为 pfun_t
//typedef unsigned int uint;
//pfun_t signal(int, pfun_t);

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int(*p)(int, int) = Add;
//	printf("%d\n", p(2, 3));
//	printf("%d\n", (*p)(2, 3));
//	return 0;
//}

//函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//	int* arr[5];
//	int(*p)(int, int) = Add;//Sub Mul Div
//	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };//函数指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));
//	}
//	return 0;
//}

char* my_strcpy(char* dest, const char* src);
//写一个函数指针能存放my_strcpy
char* (*p)(char*, const char*);
//写一个函数指针数组，能存放4个my_strcpy函数的地址
char* (*parr[4])(char*, const char*);