#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//结构体
//结构体类型的声明
//结构的自引用
//结构体变量的定义和初始化。
//结构体内存对齐
//结构体传参
//结构体实现位段（位段的填充&可移植性）
//枚举
//枚举类型的定义
//枚举的优点
//枚举的使用
//联合
//联合类型的定义
//联合的特点
//联合大小的计算


//声明s一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量(对象)
//描述学生 属性：名字 + 电话 + 性别 + 年龄

//struct Stu
//{
//	char name[20]; //名字
//	char tele[12];//电话
//	char sex[10]; //性别
//	int age;      //年龄
//}s2,s3;//分号不能丢  可以直接这样定义全局变量
//int main()
//{
//	//创建的结构体变量
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}


//匿名结构体类型
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;//只能这样创建变量
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}* px;
//int main()
//{
//	px = &x;//其实并不是同一类型
//	return 0;
//}


//结构体的自引用
//struct Node
//{
//	int data;
//	struct Node* next;//存放下一个结点的地址
//};
//int main()
//{
//	return 0;
//}


//typede 
//typedef struct Node
//{
//	int data;
//	struct Node* next;//存放下一个结点的地址
//}Node;
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}


//结构体内存对齐
struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};
int main()
{
	struct S1 s1 = { 0 };
	struct S2 s2 = { 0 };
	printf("%d\n",sizeof(s1));
	printf("%d\n", sizeof(s2));
	return 0;
}