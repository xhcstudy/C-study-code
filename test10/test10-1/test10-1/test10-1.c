#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//函数:子程序，是一个大型程序中的部分代码，由一个或多个语句块组成。它负责完成某项特定任务，而且相较于其他代码，具备相对的独立性
//一般会有输入参数并有返回值，提供对过程的封装和细节的隐藏。这些代码通常被集成为软件库。
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n",sum);
//	return 0;
//}

// 函数
//	1.库函数   www.cplusplus.com
// 常用的库函数有：  IO函数  字符串操作函数  strlen  字符操作函数  内存操作函数  memset  时间/日期函数  time   数学函数  sqrt   其他库函数
//	2.自定义函数
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#########";
//	strcpy(arr2,arr1);//将arr1中的bit和'\0'拷贝到arr2里面 所以后面的#不显示  arr2[]变成"bit\0#####"
//	printf("%s\n",arr2);
//	//strcpy -  string copy  -  字符串拷贝   
//	//strlen -  string length - 字符串长度有关
//	return 0;
//}

//memset   #include<string.h>
//memory - 内存 set - 设置
//#include<string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//将arr起始的五个字节内容更改成*   更改的内容不能溢出 不能超过原存储的字节数
//	printf("%s\n",arr);//***** world
//	return 0;
//}

//自定义函数
//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n",max);
//	max = get_max(100, 200);
//	printf("max = %d\n",max);
//	return 0;
//}

//写一个函数，交换两个整形变量的内容
//void swap1(int x, int y)//不能完成交换两个整形变量的任务因为 x,y 和 a,b的地址不同，主函数中调用swap1之后只是让x,y的值进行了交换，但打印出来的a,b仍是原来的数
//{
//	int temp = 0;
//	temp = y;
//	y = x;
//	x = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//    //调用swap1函数   传值调用
//	swap1(a, b);
//	printf("a = %d, b = %d\n",a,b);  // a = 10, b = 20
//	return 0;
//}

//改进
//void swap2(int* x, int* y)//直接运用指针找到a,b的地址，将a,b地址中的内容改变    
////这里并不是改变的实参，实参只是地址对应的16进制数，这里x,y和&a,&b的地址并不相同，只是里面放的内容是相同的，都是a,b的地址，是通过解引用改变地址中的内容从而实现的交换两个整形变量的内容
////x,y是形式参数  如果主函数中没有调用swap2, x,y甚至都没有被分配空间  并且形参档函数调用完成之后就自动销毁了，所以形参只在函数中有效
////当实参传给形参的时候
////形参实际上是实参的一份临时拷贝
////对形参的修改是不会改变实参的
//{
//	int temp = 0;
//	temp = *y;
//	*y = *x;
//	*x = temp;
//}
//int main()
//{
//	int a = 10;//开辟一个四个字节的空间储存变量a
//	//int* pa = &a;//pa为指针变量
//	int b = 20;
//	//int* pb = &b;
//	//调用swap2函数  传址调用
//	swap2(&a, &b);//&a,&b是实际参数     实参可以是变量，常量，表达式，函数等，但是必须要有确定的值
//	printf("a = %d, b = %d\n",a,b);
//	return 0;
//}

//1.写一个函数可以判断一个数是不是素数
//#include<math.h>
////是素数返回1  不是素数返回0
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//			return 0;
//	}
//		return 1;
//}
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ",i);
//		}
//	}
//	if (201 == i)
//	{
//		printf("\n");
//	}
//	return 0;
//}

//2.写一个函数判断一年是不是闰年
//是闰年返回1，不是闰年返回0
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)//打印1000-2000年的闰年
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d年是闰年\n", year);
//		}
//	}
//	return 0;
//}

//3.写一个函数，实现一个整形有序数组的二分查找
//找到了返回数组下标，找不到返回-1
//                   x本质上是一个指针 导致mid计算错误 sizeof(x) = 4 所有要多传一个变量sz
//int binary_search(int x[], int y, int sz)//调试时F11进入函数  F10是主函数调试
//{
//	int right = sz - 1;
//	int left = 0;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (y > x[mid])
//		{
//			left = mid + 1;
//		}
//		else if (y < x[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);//arr实际上只传过去数组首元素的地址
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n",ret);
//	}
//	return 0;
//} 

//4.写一个函数，每调用一次这个函数，就会将num的值增加1
//void Add(int* x)
//{
//	//*x++;  错误   因为++的作用级最高 *x++  是x++再解引用
//	(*x)++;  //正确写法
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n",num);
//	return 0;
//}

//函数的嵌套调用和链式访问
//嵌套调用   函数和函数之间可以有机的结合
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
//链式访问    把一个函数的返回值作为另外一个函数的参数
//#include<string.h>
//int main()
//{
//	int len = 0;
//	// 1.
//	len = strlen("abc");
//	printf("len = %d\n",len);
//	// 2.
//	printf("len = %d\n",strlen("abc"));
//	return 0;
//}
//int main()
//{
//	printf("%d\n",printf("%d",printf("%d",43)));
//	//printf函数的返回值是打印的字符的个数  结果为4321
//	return 0;
//}

//函数的声明和定义
//函数声明   一般放在.h文件中   函数声明一般放在函数的使用之前，要满足先声明后使用   且声明只是告诉编译器有一个函数叫什么，参数是什么，函数具体是否存在无关紧要
//int Add(int ,int );
#include"add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a,b);
	printf("sum = %d\n",sum);
	return 0;
}
//函数的定义  一般放在.c文件中  
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}