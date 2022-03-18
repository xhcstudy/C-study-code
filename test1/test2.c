#include<stdio.h>
int main()
{
	int num1=0,num2=0;
	int sum=0;
	printf("请输入两个数字，输出为输入两个数字之和\n");
	scanf("%d%d",&num1,&num2);
	sum = num1 + num2;
	printf("%d + %d = %d\n",num1,num2,sum);
	return 0;
}