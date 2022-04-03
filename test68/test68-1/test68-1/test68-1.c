#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
//struct S
//{
//	int n;
//	char c;
//	int arr[0];//柔性数组成员
//};

//代码1
//struct S
//{
//	int n;
//	int arr[];//柔性数组成员
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S));
//	int i = 0;
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		p->n = 100;
//		for (i = 0; i < 10; i++)
//		{
//			p->arr[i] = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p->arr[i]);
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//代码2
struct S
{
	int n;
	int* arr;
};

int main()
{
	int i = 0;
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps != NULL)
	{
		ps->arr = (int*)malloc(40);
		ps->n = 100;
	}
	if (ps->arr != NULL)
	{
		for (i = 0; i < 10; i++)
		{
			ps->arr[i] = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", ps->arr[i]);
		}
	}
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}

//代码2能达到代码1的效果 但是代码1形式上更优
//不用两次malloc和free，不容易出错
//并且动态内存空间是一次连续开辟出来的，相对于代码2实现出来内存碎片更少一些,空间利用率更高
//连续开辟的空间内存访问的效率更高