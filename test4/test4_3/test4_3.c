#include<stdio.h>
int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'b';
	printf("ch = %c\n",ch);
	printf("%d\n",sizeof(pc));
	return 0;
/*	int a = 10;//四个字节
	int* p = &a;//取出a的地址
	//有一种变量用来存储地址 - 指针变量
	//printf("%p\n",&a);//打印出来为16进制
	//printf("%p\n",p);
	*p = 20;// *解引用操作符
	printf("a = %d\n",a);
	return 0;
*/
}