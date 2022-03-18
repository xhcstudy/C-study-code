#include<stdio.h>
#include<string.h>
	//结构体
	//复杂对象 - 结构体 - 我们创造出来的一种类型
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};
int main()
{
	//利用结构体类型创建出一个该类型结构体变量
	struct Book b1 = {"C语言程序设计",55};
	strcpy(b1.name,"C++"); //strcpy - string copy - 字符串拷贝函数 - string.h
	printf("%s\n",b1.name);
	//struct Book* pb = &b1;
	//利用pb打印书名和价格
	// .   结构体变量  .成员
	// ->  结构体指针  ->成员
	//printf("%s\n",(*pb).name);
	//printf("%d\n",pb->price);
	/*
	printf("书名:%s\n",b1.name);
	printf("价格:%d元\n",b1.price);
	b1.price = 100;
	printf("修改后的价格为:%d元\n",b1.price);
	*/
	return 0;
}
	/*double b = 3.14;
	double* pd = &b;
	*pd = 5.5;
	printf("%d\n",sizeof(pd));
	return 0;
	*/
	//printf("%lf\n",b);
	//printf("%lf\n",*pd);

	/*int a = 10;
	//printf("%p\n",&a);
	int* p = &a;
	//printf("%p\n",p);
	*p = 20;
	printf("a = %d\n",a);
	*/
