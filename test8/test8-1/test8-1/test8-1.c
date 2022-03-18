#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//代码1
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:->");
//	scanf("%s", password);//输入密码，并存放在password数组中
//	//缓冲区还剩余一个'\n'
//	//读取掉'\n'
//	while ((ch = getchar() != '\n'))
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功\n");
//	else 
//		printf("未确认成功\n");		
//	return 0;
//}
//代码2
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')//只打印字符0 - 字符9 其他字符被continue跳过不输出
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
// for循环
// for(表达式1;表达式2;表达式3)
//    循环语句：    表达式1为初始化部分，用于初始化循环变量    表达式2为条件判断部分，用于判断循环时终止    表达式3为调整部分，用于循环条件的判断
//用for循环在屏幕上打印1 2 3 4 6 7 8 9 10
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (5 == i)
			continue;//与while循环中continue不同 for循环中遇到continue仍会执行表达式3
		printf("%d ", i);
		if (10 == i)
			printf("\n");
	}
	return 0;
}
