#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//数组参数、指针参数
//1.一维数组
//void test1(int arr[])//ok?  Y
//{
//
//}
//void test1(int arr[10])//ok?  Y
//{
//
//}
//void test1(int* arr)//ok?  Y 
//{
//
//}
//void test2(int* arr[20])//ok?  Y  并且20能省略
//{
//
//}
//void test2(int** arr)//ok?  Y  二级指针
//{
//
//}
//int main()
//{
//	int arr1[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test1(arr1);
//	test2(arr2);
//	return 0;
//}

//2.二维数组
//void test(int arr[3][5])//列不能省略
//{ }
//void test(int arr[][5])
//{ }
//void test(int *arr)//error   二维数组的首元素地址  是第一行一维数组的地址
//{ }
//void test(int** arr)//error
//{ }
//void test(int (*arr)[5])//OK
//{ }
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//3.一级指针
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}

//思考:当一个函数的参数部分是一级指针的时候，函数能接受什么参数
//void test1(int* p)
//{ }
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1);//ok
//	return 0;
//}

//二级指针传参
//void test(int** pp)
//{ }
//int main()
//{
//	int n = 10;
//	int*p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}
//思考:除了以上两种  还有没有其他形式的传参   还可以传存放一级指针数组的数组名   int* arr[10] = { 0 }   还可以test(arr);

//函数指针
//数组指针 - 指向数组的指针
//函数指针 - 指向函数的指针 - 存放函数地址的一个指针
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//&arr
//	//arr
//	//printf("%d\n",Add(a,b));
//	//&函数名 和 函数名都是函数的地址
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int (*pa)(int, int) = Add;
//	printf("%d\n",(*pa)(2,3));
//	return 0;
//}

//不同函数的地址也不相同
void Print(char* str)
{
	printf("%s\n",str);
}
int main()
{
	void (*p)(char*) = Print;
	(*p)("hello bit");
	return 0;
}