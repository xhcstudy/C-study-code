#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	// - 128 到 127
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n",strlen(a));// 遇到'\0' 停止计算   -1 -2 ....... -128 127 126......... 1 0 // -1 到 1  共有255个元素
//	return 0;
//}

//在屏幕上打印杨辉三角
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1

//int main()
//{
//	int a[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	//将第一列和对角置1
//	for (i = 0; i < 10; i++)
//	{
//		a[i][i] = 1;
//		a[i][0] = 1;
//	}
//	//求其他位置元素
//	for (i = 2; i < 10; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		//打印空格
//		for (j = 0; j < 10 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印对应i行数组元素
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//  猜凶手题目内容 :
//	日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//	以下为4个嫌疑犯的供词︰
//  A说 : 不是我。
//  B说 : 是C。
//  D说 : 是D。
//  D说 : c在胡说
//	已知3个人说了真话，1个人说的是假话。
//	现在请根据这些信息，写一个程序来确定到底谁是凶手
//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)
//		{
//			printf("凶手是 %c\n", killer);
//		}
//	}
//	return 0;
//}


//猜名次题目内容:
//5位运动员参加了10米台跳水比赛，有人让他们页测比赛结果:
//A选手说 : B第二, 我第三;
//B选手说 : 我第二，E第四; 
//C选手说 : 我第一，D第二; 
//D选手说 : C最后，我第三;
//E选手说 : 我第四，A第一;
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((a == 3) + (b == 2) == 1) &&
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (d == 2) == 1) &&
							((c == 5) + (e == 3) == 1) &&
							((e == 4) + (a == 1) == 1))
						{
							if (a*b*c*d*e == 120)
							{
								printf("%c = %d\n%c = %d\n%c = %d\n%c = %d\n%c = %d\n", 'A', a, 'B', b, 'C', c, 'D', d, 'E', e);
							}
						}
					}
				}
			}
		}
	}
}

