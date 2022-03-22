#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//函数指针数组的用途:转移表
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("****************************************\n");
//	printf("*******     1.add      2.sub      ******\n");
//	printf("*******     3.mul      4.div      ******\n");
//	printf("*******          0.exit           ******\n");
//	printf("****************************************\n");
//}
//int main()
//{
//	int input = 0;
//	int m = 0;
//	int n = 0;
//	int (*parr[])(int, int) = {0, add, sub, mul, div };
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:");
//			scanf("%d%d", &m, &n);
//			int ret = parr[input](m, n);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//		}
//		else
//		{
//			printf("选择错误，请重新输入！\n");
//		}
//	} while (input);
//	return 0;
//}

//指向函数指针数组的指针 - 是一个指针，指针指向一个数组，数组的元素都是函数指针
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr; //数组指针
//	int(*parr[4])(int, int) = { add, sub, mul, div };//函数指针数组
//	int(*(*pparr)[4])(int, int);//指向函数指针数组的指针
//	return 0;
//}

//回调函数 - 通过函数指针调用的函数  下面的add，sub，mul，div都是回调函数
//void Calc(int(*pf)(int, int))
//{
//	int m = 0;
//	int n = 0;
//	printf("请输入两个参数:");
//	scanf("%d%d",&m,&n);
//	printf("%d\n",pf(m,n));
//}
//int main()
//{
//	int input = 0;
//	int (*parr[])(int, int) = {0, add, sub, mul, div };
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(add);
//			break;
//		case 2:
//			Calc(sub);
//			break;
//		case 3:
//			Calc(mul);
//			break;
//		case 4:
//			Calc(div);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误，请重试!\n");
//		}
//	} while (input);
//	return 0;
//}

void BubbleSort(int arr[], int sz)
{
	//....
}
//qsort - 可以排序任意类型的数据
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}