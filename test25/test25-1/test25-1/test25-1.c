#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//结构体
//1 . 结构体类型声明  
//2 . 结构体初始化  
//3 . 结构体成员访问   
//4 . 结构体传参
//1 . 结构体类型声明   结构体是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量

//struct tag
//{
//	member - list;
//}variable - list;
//以学生为例   描述一个学生   名字 年龄 电话 性别
//struct - 结构体关键字    Stu - 结构体标签      struct Stu - 结构体类型  ;不可缺少

//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[11];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量

//2.结构体初始化
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[11];
//	char sex[5];
//}Stu;//将结构体类型重命名为Stu
//
//int main()
//{
//	struct Stu s = { "小肖", 20, "18073666087", "男" };//初始化  局部变量
//	Stu s1;
//	return 0;
//}


//3 . 结构体成员访问 
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;//结构体的成员可以是其他结构体
//	char* pc;
//};
//
//int main()
//{
//	struct T t = { "hehe", {10, 'w', "hello world", 3.14 }, NULL };
//	printf("%s\n",t.ch);
//	printf("%s\n", t.s.arr);
//	return 0;
//}

//4 . 结构体传参
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//将结构体类型重命名为Stu
//
//void Print1(Stu s)
//{
//	printf("name:  %s\n",s.name);
//	printf("age:   %d\n", s.age);
//	printf("tele:  %s\n", s.tele);	
//	printf("sex:   %s\n", s.sex);
//}
//
//void Print2(Stu* s)
//{
//	printf("name:  %s\n", s->name);
//	printf("age:   %d\n", s->age);
//	printf("tele:  %s\n", s->tele);
//	printf("sex:   %s\n", s->sex);
//}
//int main()
//{
//	struct Stu s = { "小肖", 20, "18073666087", "男" };//初始化  局部变量
//	//打印结构体数据
//	Print1(s);
//	Print2(&s);//这种比较好  不用为形参开辟空间  而且时间快
//	//函数传参时，参数是需要压栈。如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能下降。
//	//结论：结构体传参的时候，要传结构体地址
//	return 0;
//}

//压栈
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);
	return 0;
}