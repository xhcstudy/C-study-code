#include<stdio.h>
int main()
{
	int input = 0;
	printf("加入比特\n");
	printf("你要好好学习吗？(1/0)>:");
	scanf("%d",&input);//1/0
	if(input == 1)
		printf("好offer\n");
	else
		printf("回家卖红薯\n");
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//scanf("%d%d",&num1,&num2);
	//sum = num1 + num2;
	//printf("sum = %d\n",sum);
	return 0;
}