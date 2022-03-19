#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//vc环境 c语言调试技巧
//Debug 和 Release的介绍
//Debug通常为调试版本 它包含调试信息 并且不做任何优化  便于程序员调试程序
//Release称为发布版本 它往往是进行了各种优化，使得程序在代码大小和运行速度上都是最优的，以便用户很好的使用
//test.c  ->  .exe 可执行程序
//Debug   ->  Debug版本的可执行程序      31kb   可以调试的，因为文件中包含了调试信息
//Release ->  Release版本的可执行程序    7kb    不能进行调试
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ",i);
//	}
//	system("pause");
//	return 0;
//}

//Release版本相对于Debug版本进行了那些优化呢？
//Debug版本下面代码为死循环
//Release版本下面代码打印13行hehe
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//windows环境调试介绍  注:linux开发环境调试工具是gdb
//1.调试环境的准备   改成Debug

//2.学会快捷键
// F5  启动调试，经常用来直接调到下一个断点处(执行逻辑的下一个断点)。   要和F9配合使用
// F9  创建断点和取消断点  断点的重要作用，可以在程序的任意位置设置断点。这样就可以使得程序在想要的位置随意停止执行，继而一步步执行下去。  设置断点
// F10 逐过程，通常用来处理一个过程，一个过程可以是一次函数调用，或者是一条语句。
// F11 逐语句，就是每次都执行一条语句，但是这个快捷键可以使我们的执行逻辑进入函数内部(这是最常用的)。
// CTRL + F5   开始执行不调试，如果你想让你的程序直接运行起来而不调试就可以直接使用。
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ",i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ",10 - i);
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);//调式进入函数内部需要F11  F10把函数调用看成一个过程  直接跳过不进入函数内部
//	return 0;
//}

//3.调试的时候查看程序当前信息
//查看临时变量的值
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//调用堆栈
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}


//一些调试的实例
//实例1  实现代码：求1! + 2! + 3! + ... + n!;不考虑溢出
//自写
//int get_factorial(int n)
//{
//	if (n > 1)
//	{
//		return n * get_factorial(n - 1);
//	}
//	return 1;
//}
//int get_factorial_sum(int n)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += get_factorial(i);
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0; 
//	int sum = 0;
//	scanf("%d",&n);
//	sum = get_factorial_sum(n);
//	printf("sum = %d\n",sum);
//	return 0;
//}

//调试代码
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d",&n);//3 1! + 2! + 3! = 1 + 2 + 3 = 9
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;//ret每次求完一次阶乘应该置1 erro
//		}
//		sum += ret;
//	}
//	printf("sum = %d\n",sum);
//	return 0;
//}

//死循环原因 
//main函数中i和数组arr都是局部变量，局部变量是在栈上存储的，而栈区默认先使用高地址处的空间，再使用低地址的空间，并且数组随着下标增长，地址是由低到高变化
//当出现越界访问数组时，就有可能越界访问到i的地址，然后改变数组的时候，将i改变，从而导致死循环
//int main()
//{
//	int i = 0;//由于上面的原因  如果改变定义i和数组arr的顺序就不会出现死循环  但是仍会报错 不建议越界
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//VC6.0 环境下 <= 10 就死循环   说明内存布局空间不同
//	//gcc 编译器   <= 11 就死循环
//	//VS2013       <= 12 就死循环
//	printf("%p\n", arr);//Debug版本i的地址高于数组arr地址   Release版本优化之后数组arr地址高于i的地址
//	printf("%p\n", &i);
//	//for (i = 0; i <= 11; i++)
//	//{
//	//	printf("hehe\n");
//	//	arr[i] = 0;
//	//}
//	system("pause");
//	return 0;
//}

//模拟实现库函数strcpy
//优化之前
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//最后将'\0'拷贝过去
//}

//优化之后
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)//判断不能为空指针   否则会导致程序崩溃  但是会忽略错误
//	{
//		while (*dest++ = *src++)//判断条件时就完成赋值  并且赋值'\0'时 表达式的值为0  结束循环
//		{
//			;
//		}
//	}
//}

//进一步优化
#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//继续优化
//char* my_strcpy(char* dest, const char* src)//const 给src附常属性 防止写反传错 如写反 src不能被改变会报错
//{
//	char* ret = dest;//保存dest的起始地址
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//	while (*dest++ = *src++)//判断条件时就完成赋值  并且赋值'\0'时 表达式的值为0  结束循环
//	{
//		;
//	}
//	return ret;//返回dest起始地址
//}
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "##########################";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问  一个函数的返回值作为另外一个函数的参数
//	return 0;
//}

//关于const和指针
//int main()
//{
//	const int num = 10;
//	int* const p = &num;
//	//const 放在指针变量*左边时，修饰的是*p,也就是说：不能通过p来改变*p(num)的值
//	//const 放在*右边时，修饰的是p，不能改变p的值(地址)
//	//const int* const p  const同时修饰地址和内容  都不能改变
//	*p = 20;
//	printf("%d\n",num);
//	int n = 100;
//	p = &n;
//	return 0;
//}

//模拟实现strlen
int my_strlen(const char* str)
{
	int len = 0;
	assert(str != NULL);
	while (*str++ != '\0')
	{
		len++;
	}
	return len;
}
int main()
{
	char arr[] = "bit";
	int len = 0;
	printf("len = %d\n",my_strlen(arr));
	return 0;
}

//编译常见的错误
//常见的错误分类：
//1.编译型错误   直接看错误提示信息(双击)，解决问题。或者凭借经验就可以搞定，相对来说简单。
//2.链接型错误   看错误提示信息，主要在代码中找到错误信息中的标识符，然后定位问题所在。一般是标识符不存在或者拼写错误
//3.运行时错误   借助调试，逐步定位问题，最难搞