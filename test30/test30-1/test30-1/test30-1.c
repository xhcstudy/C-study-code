#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//练习3
//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100 - 原码
//	//11111111111111111111111111101011 - 反码
//	//11111111111111111111111111101100 - 补码
//	unsigned int j = 10;
//	//00000000000000000000000000001010		
//	//i+j
//	//11111111111111111111111111110110 - i+j 的补码
//	//11111111111111111111111111110101 - 反码
//	//10000000000000000000000000001010 - 原码   -10
//	printf("%d\n",i+j);
//	return 0;
//}

//练习4
//#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n",i);
//		Sleep(100);
//	}
//	return 0;
//}

//练习5
//#include <string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i; 
//		// -1 - 0
//		//11111111111111111111111111111111
//		//00000000000000000000000000000000
//		//11111111111111111111111111111111
//		//a[i]为char类型  要截断为11111111 - 补码   原码为 10000001
//		// -1 - 1
//		//10000010
//		// -1 - 127
//		//11111111   -  -128   再减去1就会变成 127
//		// -1 - 255
//		//11111111111111111111111111111111
//		//00000000000000000000000011111111
//		//11111111111111111111111100000000   -  0  最后这个0不能算进去
//		//00000000  所以strlen函数遇到这个a[255]时停止 a[0] - a[254] 共255个字符  返回255
//	}
//	printf("%d",strlen(a));
//	return 0;
//}

//练习6
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)//死循环  因为i是unsigned char   范围在0-255  所以 i <=255 一直满足  根据5 6 两道题可看出 当一个数据类型的最大值+1 变成最小值 最小值-1 变成最大值
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//浮点型在内存中的存储
//常见的浮点数:3.14159   1E10(1.0*10^10)  浮点数家族包括:float、double、long double类型。 浮点数表示的范围:float.h中定义
//int main()
//{
//	double d = 1E10;
//	printf("%lf",d);
//	return 0;
//}

//整形和浮点型的数据在内存中的存储方式不一样
int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为: %d\n", n);
	printf("*pFloat的值为: %f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为: %d\n", n);
	printf("*pFloat的值为: %f\n", *pFloat);
	return 0;
}