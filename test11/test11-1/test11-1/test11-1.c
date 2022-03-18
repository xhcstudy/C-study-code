#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("sum = %d\n",sum);
//	return 0;
//}

//函数递归  程序调用自身的编程技巧叫做递归   通常把一个大型复杂的问题层层转化为一个于原问题相似的规模较小的问题来求解   主要思考方式：大事化小
//int main()
//{
//	printf("hehe\n");
//	main();  //递归常见错误  stack overflow  栈溢出
//	return 0;
//}
//内存会划分为三个区域    栈区   堆区    静态区
//栈区     局部变量    函数形参    函数调用主要在栈区上申请空间
//堆区     动态开辟的内存    malloc    calloc
//静态区   全局变量    static修饰的变量

//递归的两个必要条件
// 1. 存在限制条件，当满足这个限制条件的时候，递归不再继续。
// 2. 每次递归调用之后越来越接近这个限制条件。

//练习 1. 接收一个整形数（无符号），按照顺序打印它的每一位。例如：输入1234，输出1 2 3 4.
//void print(n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	printf("输入一个无符号整数:");
//	scanf("%d",&num);//1234
//	//递归
//	print(num);
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4 将1234拆分到只剩下一个数字  然后依次打印 
//	return 0;
//}

//练习 2. 编写函数不允许创建临时变量，求字符串长度。
#include<string.h>
////int my_strlen(char* str)
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("len = %d\n",len);
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是首元素的地址
//	printf("len = %d\n",len);
//	return 0;
//}

//递归于迭代
//迭代  重复的做一个事情 不一定是循环
//练习 3. 求n的阶乘。（不考虑溢出）
//int factorial(int n)
//{
//	if (n > 1)
//	{
//		return n * factorial(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int ret = 0;
//	int input = 0;
//	printf("请输入要求阶乘的数字:");
//	scanf("%d",&input);
//	ret = factorial(input);
//	printf("%d! = %d\n",input,ret);
//	return 0;
//}

//练习 4. 求第n个斐波那契数。（不考虑溢出）
//int count = 0;
//int Fibonacci1(int n) // f(0) = 0  f(1) = 1    f(n) = f(n-1) + f(n-2) n > 2
////重复计算太多 
////要求第40个数 
////  40   39 38
////  39   38 37      38   37  36
////....
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n > 2)
//	{
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//改进
//迭代的方法
int Fibonacci2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int ret = 0;
	int input = 0;
	printf("请输入要求的斐波那契数:");
	//TDD - 测试驱动开发
	scanf("%d",&input);
	ret = Fibonacci2(input);
	printf("第%d个斐波那契数为:%d\n",input,ret);
	//printf("n = 3出现的次数:%d\n",count);//求重复计算的次数
	return 0;
}

//函数递归的几个经典题目（自主研究）：
// 1.汉诺塔问题
// 2.青蛙跳台阶问题