#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//枚举

//枚举类型
//enum Sex
//{
//	//枚举的可能取值 - 常量
//	MALE = 1,
//	FEMALE = 2,
//	SECRET = 4
//};
//
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};

//C语言源代码 ---> 预编译 ---> 编译 ---> 链接 ---> 可执行程序
//#define RED 0
//#define GREEN 1
//#define BLUE 2
//
//int main()
//{
//	//enum Sex s = MALE;
//	//enum Color c = BLUE;
//	//enum Color c = 2;//int   就算不报错也是错误写法  int 无法转换为 enum Color 类型
//	int color = RED;
//	//printf("%d %d %d\n", RED, GREEN, BLUE);
//	//printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	return 0;
//}

//枚举的优点
//为什么使用枚举 ?
//我们可以使用#define定义常量，为什么非要使用枚举 ?
//枚举的优点 :
//1.增加代码的可读性和可维护性
//2.和#define定义的标识符比较枚举有类型检查，更加严谨。3.防止了命名污染(封装)
//4.便于调试
//5.使用方便，一次可以定义多个常量


//联合(共用体) - 联合体
//联合也是一种特殊的自定义类型 这种类型定义的变量也包含一系列的成员，特征是这些成员公用同一块空间（所以联合也叫共用体)
//特点:联合体变量的大小，至少是最大成员的大小
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n",sizeof(u));
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}


//判断当前计算机的大小端存储
//方法1
//int check_sys()
//{
//	int a = 1;//0x00 00 00 01
//	char* p = (char*)&a;
//	//返回1表示小端     返回0表示大端
//	return *p;
//}
//int main()
//{
//	int ret = 0;
//	ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//方法2
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	//返回1 表示小端    返回0表示大端
	return u.c;
}

int main()
{
	int ret = 0;
	ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}