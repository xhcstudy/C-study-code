#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//统计2进制(补码)中1的个数 
//方法1
//int count_bit_one(unsigned int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (n & 1 == 1)
//		{
//			count++;
//		}
//		n = n >> 1;
//	}
//	return count;
//}
//int main()
//{
//	int a = 15;
//	int i = 0;
//	int count = count_bit_one(a);
//	printf("%d\n",count);
//	return 0;
//}

//方法2  （更优）
//n = n & (n - 1)  运算一次 能将n最右边的1置为0
// n  = 13     1101
// n - 1       1100
// n * n - 1   1100
// n = 12      1100
// n - 1       1011
// n * n - 1   1000  两次运算之后 从 1101 变成 1000  
//void count_bit_one()
//{
//	int a = 0;
//	int i = 0;
//	int count = 0;
//	printf("请输入要求的数：");
//	scanf("%d",&a);
//	while (a != 0)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	printf("你所输入数字的二进制中1的个数为:%d\n", count);
//}
//int main()
//{
//	count_bit_one();
//	return 0;
//}

//system("pause");//system库函数 - 执行系统命令 - pause(暂停)  需要引#include <stdlib.h>
//求二进制中不同位的个数  
//思路：将所求的两个数异或，然后统计异或结果对应二进制中1的个数
//int get_diff_bit(int m, int n)
//{
//	int x = m ^ n;
//	return count_bit_one(x);//上面实现的函数
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	printf("请输入要求的两个数:");
//	scanf("%d%d",&a,&b);
//	count = get_diff_bit(a, b);
//	printf("所输入两个数中二进制不同位的个数为:%d\n",count);
//	return 0;
//}

//打印二进制的奇数位和偶数位  获取一个整数二进制序列中所有偶数位和奇数位，分别打印出二进制序列   ***位运算不会改变原变量的值。要改变原变量的值需要经过赋值表达式实现。
//void Print(int m)
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	printf("该数的所有奇数位的二进制为:");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d",(m >> i) & 1);
//	}
//	printf("\n");
//	printf("该数的所有偶数位的二进制为:");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	printf("请输入所要求的数字:");
//	scanf("%d",&m);
//	Print(m);
//	return 0;
//}

//const修饰指针的三种效果，C语言const修饰指针详解
//1) const int* p = &a；
//同样 const 和 int 可以互换位置，二者是等价的。我们以放在最前面时进行描述。
//当把 const 放最前面的时候，它修饰的就是 *p，那么 *p 就不可变,即内容不可变。
//2) int* const p=&a；
//此时 const 修饰的是 p，所以 p 中存放的内存单元的地址不可变，而内存单元中的内容可变。
//3) const int* const p = &a；
//此时 *p 和 p 都被修饰了，那么 p 中存放的内存单元的地址和内存单元中的内容都不可变。

//实现一个函数,打印乘法口诀表，口诀表的行数和列数自己指定  
//如:输入9，输出9*9口诀表，输入12，输出12*12的乘法口诀表
//void print_table(int m)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= m; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d = %-4d",i,j,i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int m = 0;
//	printf("请输入所要输出的口诀表的行数:");
//	scanf("%d",&m);
//	print_table(m);
//	return 0;
//}

//用递归的方式实现打印一个整数的每一位
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	print(a);
//	return 0;
//}

//非递归求n的阶乘
//int get_factorial(int n)
//{
//	int i = 0;
//	int fac = 1;
//	for (i = n; i >= 1; i--)
//	{
//		fac = i * fac;
//	}
//	return fac;
//}
//int main()
//{
//	int n = 0;
//	int fac = 0;
//	scanf("%d",&n);
//	fac = get_factorial(n);
//	printf("fac = %d\n",fac);
//	return 0;
//}

//递归求n的阶乘
//int get_factorial(int n)
//{
//	if (n >1)
//	{
//		return n * get_factorial(n - 1);
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	int fac = 0;
//	scanf("%d",&n);
//	fac = get_factorial(n);
//	printf("fac = %d\n", fac);
//	return 0;
//}

//编写一个函数reverse_string(char* string) (递归实现)    将参数字符串中的字符反向排列。  要求:不能使用C库函数中的字符串操作函数
//无递归实现
//int  my_strlen(char str[])
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//void reverse_string(char arr[])
//{
//	int left = 0;
//	int len = my_strlen(arr) - 1;
//	int right = len;
//	while (left < right)
//	{
//		char temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		right--;
//		left++;
//	}
//}

//int main()
//{
//	char arr[] = "bit";
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_string(arr);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c",arr[i]);
//	}
//	return 0;
//}

//递归实现
//void reverse_string(char arr[])
//{
//	char temp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr+1);
//	}
//	arr[len - 1] = temp;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_string(arr);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c",arr[i]);
//	}
//	return 0;
//}

//写一个递归函数DigSum(n)，输入一个非负整数，返回组成它的数字之和
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	return n % 10;
//}
//int main()
//{
//	unsigned int n = 0;
//	int m = 0;
//	scanf("%d",&n);
//	m = DigitSum(n);
//	printf("%d\n",m);
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现
double get_power(int x, int y)
{
	if (y > 0)
	{
		return x * get_power(x, y - 1);
	}
	else if (y == 0)
	{
		return 1;
	}
	else
	{
		return 1.0 / get_power(x, -y);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d",&n,&k);
	double ret = get_power(n, k);
	printf("ret = %lf\n",ret);
	return 0;
}
