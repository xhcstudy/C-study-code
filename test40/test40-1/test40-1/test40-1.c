#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	//char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));			//7
//	//printf("%d\n", sizeof(arr + 0));		//4/8
//	//printf("%d\n", sizeof(*arr));			//1
//	//printf("%d\n", sizeof(arr[1]));		//1
//	//printf("%d\n", sizeof(&arr));			//4/8
//	//printf("%d\n", sizeof(&arr + 1));		//4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));	//4/8
//
//	//printf("%d\n", strlen(arr));			//6	
//	//printf("%d\n", strlen(arr + 0));		//6
//	//printf("%d\n", strlen(*arr));			//error
//	//printf("%d\n", strlen(arr[1]));		//error
//	//printf("%d\n", strlen(&arr));			//6 但是会有警告  传参类型不同
//	//printf("%d\n", strlen(&arr + 1));		//随机值
//	//printf("%d\n", strlen(&arr[0] + 1));	//5
//
//	char *p = "abcdef";
//	//p存的其实就是'a'的地址
//	//printf("%d\n", sizeof(p));			//4/8
//	//printf("%d\n", sizeof(p + 1));		//4/8
//	//printf("%d\n", sizeof(*p));			//1
//	//printf("%d\n", sizeof(p[0]));			//1
//	//printf("%d\n", sizeof(&p));			//4/8
//	//printf("%d\n", sizeof(&p + 1));		//4/8
//	//printf("%d\n", sizeof(&p[0] + 1));	//4/8
//
//	printf("%d\n", strlen(p));			//6	
//	printf("%d\n", strlen(p + 1));		//6
//	//printf("%d\n", strlen(*p));		//error
//	//printf("%d\n", strlen(p[0]));		//error
//	printf("%d\n", strlen(&p));			//随机值  &p对应的是一个二级指针  会有警告  传参类型不同
//	printf("%d\n", strlen(&p + 1));		//随机值  传参类型不同
//	printf("%d\n", strlen(&p[0] + 1));	//5
//	return 0;
//}

//二维数组
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0] + 1));
	printf("%d\n", sizeof(*(a[0] + 1)));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(*(a + 1)));
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));
	return 0;
}