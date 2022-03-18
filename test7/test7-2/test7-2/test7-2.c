#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
int main()
{
//switch语句
//switch(整形表达式)
//	{
//		语句项：
//	}
//case 整形常量表达式
//	语句;
	int day = 0;
	scanf("%d", &day);
	switch (day)//只管从哪里进  case 和 default 没有顺序要求 建议default放在最后
	{
	case 1:
		printf("星期1\n");
		break;
	case 2:
		printf("星期2\n");
		break;
	case 3:
		printf("星期3\n");
		break;//跳出switch语句
	case 4:
		printf("星期4\n");
		break;
	case 5:
		printf("星期5\n");
		break;
	case 6:
		printf("星期6\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	default://如果day = 8
		printf("输入错误\n");
	}

//判断一个数是否为奇数
	//int num = 0;
	//printf("请输入一个数字num:\n");
	//scanf("%d", &num);
	//if (num % 2 == 0)
	//	printf("num不是奇数\n");
	//else
	//	printf("num是奇数\n");

//输出1-100之间的奇数
	//int i = 1;
	//int n = 0;
	//while (i <= 100)
	//{
	//	if (i % 2 != 0)
	//	{
	//		n++;//后置++先运算在自增
	//		printf("第%d个奇数为：%d\n",n, i);
	//	}
	//	i++;
	//}
	return 0;
}
