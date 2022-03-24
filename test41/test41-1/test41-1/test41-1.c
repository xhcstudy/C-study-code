#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//二维数组
//二维数组 首元素是 第一行的一维数组
//a[0]可以看成第一行数组的数组名
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));				//48
//	printf("%d\n", sizeof(a[0][0]));		//4
//	printf("%d\n", sizeof(a[0]));			//16   a[0]可以理解为第一行的数组名  sizeof(数组名) 此时数组名代表整个数组 计算第一行a[0]总体大小   
//	printf("%d\n", sizeof(a[0] + 1));		//4/8  此时不是单独放在sizeof内部  此时代表首元素地址 a[0]是第一行第一个元素地址 a[0] + 1 就是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));	//4    a[0] + 1 再解引用 就是第一行第二个元素  为int型 四个字节
//	printf("%d\n", sizeof(a + 1));			//4/8  a + 1代表第二行的地址
//	printf("%d\n", sizeof(*(a + 1)));		//16   a + 1代表第二行的地址 再解引用就是第二行的元素 总大小16个字节
//	printf("%d\n", sizeof(&a[0] + 1));		//4/8  &a[0] + 1 代表第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));	//16
//	printf("%d\n", sizeof(*a));				//16
//	printf("%d\n", sizeof(a[3]));			//16
//	return 0;
//}	

//指针笔试题
//1.
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1); 
//	printf("%d,%d", *(a + 1), *(ptr - 1));// 2,5  
//	//ptr 指向的是跳过数组a的下一个地址  int* 决定了步长  ptr - 1指向的是a[5]
//	return 0;
//}

//2.
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p 的值为0x100000。如下表达式的值分别为多少
//已知，结构体Test类型的变量大小为20个字节
//指针 +- 整数取决于指针类型
int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1); //p + 20个字节   0x00100014
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);
}
