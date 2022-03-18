#include<stdio.h>
int main()
{
	extern int Add(int,int);//声明外部函数
	int a = 10;
	int b = 20;
	int sum = Add(a,b);
	printf("sum = %d\n",sum);
	return 0;
}
/*int main()
{
	//static 修饰局部变量 能延长使用周期
	//static 修饰全局变量 能改变全局变量的作用域 让静态的全局变量只能在自己的源文件内部使用
	//static 修饰函数     能改变函数的作用域 不准确的说法 
	//static 修饰函数     能改变函数的连接属性
	//正常的函数具有外部连接属性（外部文件声明之后能使用） 用static修饰函数之后，外部连接属性->内部连接属性
	extern int g_val;
	printf("g_val = %d\n",g_val);
	return 0;
}*/
/*void test()
{
	static int a = 1;
	a++;
	printf("a = %d\n",a);
}
int main()
{
	int i = 0;
	while(i < 5)
	{
		test();
		i++;
	}
	return 0;
}*/