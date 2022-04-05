#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#define 后面尽量不要加分号

//#define MAX 100;
//
//int main()
//{
//	int a = MAX;
//	printf("%d\n", MAX);
//	return 0;
//}


//#define 定义宏
//#define机制包括了一个规定，允许把参数替换到文本中,这种实现通常称为宏(macro)或定义宏(define macro)
//#define name(parament - list)stuff 其中的parament - list 是一个由逗号隔开的符号表，它们可能出现在stuff中。
//注意：参数列表的左括号必须与name紧邻。如果两者之间有任何空白存在，参数列表就会被解释为stuff的一部分。

//#define SQUARE(X) X*X

//int main()
//{
//	//int ret = SQUARE(5);
//	////int ret = 5 * 5;
//	//printf("ret = %d\n", ret);
//	int ret = SQUARE(5 + 1);
//	printf("ret = %d\n", ret);//11 宏不是传参 而是替换  5 + 1 * 5 + 1 = 11
//	return 0;
//}

//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);//55
//	//int ret = 10 * a+a;
//	printf("ret = %d\n", ret);//加上括号之后100 写宏的时候不要吝啬括号
//	return 0;
//}

//#define替换规则
//在程序中扩展#define定义符号和宏时，需要涉及几个步骤。
//1.在调用宏时，首先对参数进行检查，看看是否包含任何由#define定义的符号。如果是它们首先被替换。
//2.替换文本随后被插入到程序中原来文本的位置。对于宏，参数名被他们的值替换。
//3.最后，再次对结果文件进行扫描，看看它是否包含任何由#define定义的符号。如果是就重复上述处理过程。
//注意 :
//1.宏参数和#define定义中可以出现其他#define定义的变量。但是对于宏，不能出现递归。
//2.当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索。


//#和##

//#的作用

//这种方式不能实现将参数插入字符串中
//void print(int a)    
//{
//	printf("the value of a is %d\n", a);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n", a);
//	print(a);
//	print(b);
//	return 0;
//}


//利用宏#X能改进上述缺点 将参数插入到字符串中
//#define PRINT(X) printf("the value of "#X" is %d\n",X)   //传a过去  #X  == "a"

//int main()
//{
//	//printf("hello world\n");
//	//printf("hello " "world\n");
//	//printf("hel" "lo " "world\n");
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//被替换为printf("the value of ""a"" is %d\n", a);
//	PRINT(b);
//	return 0;
//}


//##的作用 - ##可以把位于它两边的符号合成一个符号。它允许宏定义从分离的文本片段创建标识符

#define CAT(X,Y) X##Y

int main()
{
	int Class84 = 2019;
	//printf("%d\n", Class84);
	printf("%d\n", CAT(Class,84));
	//printf("%d\n", Class##84);
	//printf("%d\n", Class84);
	return 0;
}