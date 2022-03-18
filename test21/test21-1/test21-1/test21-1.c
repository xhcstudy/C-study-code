#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//指针   存储地址的变量
//int main()
//{
//	int a = 0x11223344;
//	//int*  和char* 的区别   int*  能访问四个字节  char*  只能访问1一个字节
//	//int* pa = &a;//p是指针变量 
//	//*pa = 0;
//	char* p = &a;
//	*p = 0;//只能操纵一个字节  将a的内容改成了0x11223300
//	//指针类型决定了指针进行解引用操作的时候，能访问的空间的大小
//	return 0;
//}

//指针+-整数  指针类型决定了指针走一步走多远   -  决定了指针的步长
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n",pa);
//	printf("%p\n", pa + 1);//打印后面四个字节的地址   因为是int型
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//打印后面一个字节的地址   因为是char型  char类型占一个字节的空间
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	//int* p = arr;//数组名 - 首元素地址
	////将每个元素内容都改成1
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = 1;
	//}
	char* p = arr;//只能改10个字节   
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
	return 0;
}

//野指针  野指针就是指针指向的位置是不可知的(随机的， 不正确的， 没有明确限制的)
//野指针成因
//1.指针未初始化
//int main()
//{
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//局部指针变量，不初始化就是随机值
//	*p = 20;
//	return 0;
//}

//2.指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*(p++) = i;//当指针指向的范围超过数组arr的范围是，p就是野指针
//	}
//	return 0;
//}

//3.指针指向的空间释放
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();//局部变量已经被释放  虽然 p保存了&a  但是&a已经被释放了  *p无法访问到原空间了
	*p = 20;
	return 0;
}
