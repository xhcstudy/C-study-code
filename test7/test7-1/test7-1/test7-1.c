#include<stdio.h>
int main()
{
	int num = 4;
	if (5 == num)//即使写错 5=num也会报错无法编译 良好的代码书写习惯
	{
		printf("呵呵\n");
	}
	//if (num = 5)// = 赋值  == 才是判断 误区
	//{
	//	printf("呵呵\n");
	//}
	//int a = 0;
	//int b = 2;
	//if (a == 1)//输出haha
	//{
	//	if (b == 2)
	//		printf("hehe\n");
	//}
	//	else
	//		printf("haha\n");
	//悬空else：else匹配最近的if
	//int a = 0;
	//int b = 2;
	//if (a == 1)// a = 0不满足条件直接不执行下面的if-else结果为什么都不输出
	//	if (b == 2)
	//		printf("hehe\n");
	//	else
	//		printf("haha\n");
	//int age = 10;
	//if (age < 18)
	//{
	//	printf("未成年\n");
	//	printf("不能谈恋爱\n");
	//}
	return 0;
}
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	printf("不能谈恋爱\n");//报错没有匹配if的非法else(后面只能跟一条语句，如要跟多条语句得用代码块既大括号括起来)
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//	return 0;
//}