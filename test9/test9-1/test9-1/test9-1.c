#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<math.h>
//写代码将三个数从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	printf("请输入三个数:");
//	scanf("%d%d%d", &a, &b, &c);
//	//算法实现a中放最大值，b次之，c中放最小值
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == i % 3)
//			printf("%d ", i);
//	}
//	return 0;
//}

//给定两个数，求这两个数的公约数  辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	printf("请输入两个数:");
//	scanf("%d%d",&a,&b);
//	while (a % b)
//	{
//		if (a < b)
//		{
//			temp = a;
//			a = b;
//			b = temp;
//		}
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("最大公约数为：%d\n", b);
//	return 0;
//}

//打印1000年到2000年的闰年   闰年能被4整除但是不能被一百整除 或者能被四百整除
//int main()
//{
//	int i = 0;
//	int count = 0;
//	printf("1000年到2000年的闰年有：\n");
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	if (2001 == i)
//	{
//		printf("\n共有%d个闰年\n",count);
//	}
//	return 0;
//}

//打印100-200之间的素数  素数只能被1和他本身整除  
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	printf("100 - 200之间的素数有:");
//	for (i = 100; i <= 200; i++)
//	{
//		for (n = 2; n < i; n++) // 试除法  产生2 -> i-1
//		{
//			if (i % n == 0)
//			{
//				break;
//			}
//		}
//		if (i == n)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	if (i == 201)
//	{
//		printf("\n共有%d个素数\n", count);
//	}
//	return 0;
//}

//优化之后   如果一个数不是素数 一定能写出 i = a*b   此时  a和b中  至少有一个数字是 <= 开平方的i  // sqrt(i)     偶数除了2不可能是素数 i++可以改成i+=2
//int main()
//{
//		int i = 0;
//		int n = 0;
//		int count = 0;
//		//sqrt - 开平方的数学库函数   #include<math.h>
//		printf("100 - 200之间的素数有:");
//		for (i = 101; i <= 200; i+=2)  //偶数除了2不可能是素数
//		{
//			for (n = 2; n <= sqrt(i); n++) // 试除法  产生2 -> i-1
//			{
//				if (i % n == 0)
//				{
//					break;
//				}
//			}
//			if (n > sqrt(i))
//			{
//				printf("%d ", i);
//				count++;
//			}
//		}
//		if (i == 201)
//		{
//			printf("\n共有%d个素数\n", count);
//		}
//	return 0;
//}

//编写程序数一下 1-100的所有整数中出现多少个数字9    个位9和十位9
//int main()
//{
//	int i = 0;
//	int ge = 0;
//	int shi = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		ge = i % 10;
//		shi = i / 10;
//		if (ge == 9)
//		{
//			count++;
//		}
//		if (shi == 9)
//		{
//			count++;
//		}
//	}
//	printf("1-100的所有整数中出现了%d个数字9\n", count);
//	return 0;
//}

//分数求和  计算1/1 - 1/2 + 1/3 - 1/4 + 1/5 ....+ 1/99 - 1/100
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	double xiang = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}

//求10个整数中最大值
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int max = arr[0];//认为最大值  ,不要每次都赋值 0  若数组全为负数有可能导致错误结果
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int a = 0;//行
//	int b = 0;//列
//	int c = 0;//乘法结果
//	for (a = 1; a <= 9; a++)
//	{
//		//打印一行
//		for (b = 1; b <= a; b++)
//		{
//			c = a * b;
//			printf("%d * %d = %-2d  ", a, b, c);  //%2d 表示打印这个数的时候打印两个位置   解决对齐问题   正数为右对齐  负数为左对其
//		}
//		if (b > a)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}

//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字
#include<stdlib.h>
#include<time.h>
////游戏函数
////1.生成一个随机数
////2.猜数字
//void game()
//{
//	int guess = 0;
//	int ret = 0;
//	ret = rand() % 100 + 1;//产生1 - 100之间随机数
//
//	while (guess != ret)
//	{
//		printf("请猜数字: ->");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了,继续猜猜\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了,继续猜猜\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//		}
//	}
//}
////游戏菜单函数
//void meun()
//{
//	printf("#####################################\n");
//	printf("######        请选择           ######\n");
//	printf("####    1. play       0. exit    ####\n");
//}
//int main()
//{
//	int input = 0;
//	// srand用于设定rand函数随机数的生成起点   用rand()函数和srand()函数需要引头文件 #include<stdlib.h>
//	// srand()内需要一个随机数  用时间戳来设置随机数的生成起点
//	//time_t time(time_t* timer)   time_t 其实本质上是一个long长整型被tpyedef    用time()函数需要引头文件 #include<time.h>
//	srand((unsigned int)time(NULL));
//	do
//	{
//		meun();
//		printf("请选择: ->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//goto语句
//int main()
//{
//	again:
//	printf("hello bit!\n");
//	goto again;
//	return 0;
//}

//关机程序
#include<windows.h>
#include<string.h>
int main()
{
	//shutdowun -s -t 60 //电脑 60s之内关机  取消:再输入 shutdown -a
	// cmd  command - 命令行
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("请注意你的电脑将再一分钟内关机,如果输入我是帅哥，则取消关机\n请输入->:");
	scanf("%s", input);
	if (strcmp(input, "我是帅哥") == 0)
	{
		system("shutdown -a");
		printf("关机已经被取消\n");
	}
	else
	{
		goto again;
	}
	return 0;
}