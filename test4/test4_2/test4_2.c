#include<stdio.h>
//#define 定义标识符常量
//#define MAX 100
//#define 可以定义宏 - 带参数
/*int Max(int x,int y)  //函数实现
{
	if(x>y)
		return x;
	else
		return y;
}*/
//宏的定义
#define MAX(X,Y) (X>Y?X:Y)
int main()
{
	int a =10;
	int b =20;
	//int max = Max(a,b);//函数的方式
	int max = MAX(a,b);    //宏的方式
	// max = a>b?a:b;
	printf("max = %d\n",max);
	return 0;
}