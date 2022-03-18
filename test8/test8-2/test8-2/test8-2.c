#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
// for循环  不可在for循环体内改变循环变量，防止for循环失去控制
//          建议for语句的循环控制变量的取值采用“前闭后开区间”写法
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	// 10次循环 10次打印 10个元素 i < 10
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//变种1
//int main()
//{
//	for (;;)//死循环   理论上均可以省略 但若省略判断条件代表恒为真    不建议随便省略条件
//	{
//		printf("hehe\n");
//	}
//}

//不建议随便省略的例子
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");    //打印 10*10 == 100 个hehe 若省略 for循环中的 i=0 和 j=0 只打印 10个hehe
//		}
//	}
//	return 0;
//}

//变种2
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0/*逗号表达式先计算表达式1，然后计算表达式2，取值取表达式2*/; x < 2 && y < 5; ++x, ++y)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//一道笔试题：请问循环要循环多少次
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//0次    k=0为赋值 表达式2直接为假（0表示假）不进入循环
//		k++;
//	return 0;
//}

//do...while()循环  先执行再判断b
//do语句的语法
//  do
//   循环表达式：
//  while (表达式);
//打印1-10
int main()
{
	int i = 1;
	do
	{
		if (5 == i)
			break;
		printf("%d ", i);
		i++;
	} while (i <= 10);
}