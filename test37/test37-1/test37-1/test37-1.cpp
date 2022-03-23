#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//qsort - 库函数 - 排序
//quick sort - 快速排序
//void qsort(void *base, size_t num, size_t width, int(*cmp)(const void * e1, const void* e2));
//void Bubble_Sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void* e1, const void* e2)
{
	//比较两个整形值的
	return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void* e1, const void* e2)
{
	//比较两个浮点型
	if (*(float*)e1 == *(float*)e2)
	{
		return 0;
	}
	else if (*(float*)e1 > *(float*)e2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
 
int cmp_stu_by_age(const void* e1, const void* e2)
{
	//比较两个结构体的年龄    强制类型转化为结构体指针类型  然后通过 -> 访问结构体成员
	return ((((struct Stu*)e1)->age) - (((struct Stu*)e1)->age));
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	//比较两个结构体的名字    强制类型转化为结构体指针类型  然后通过 -> 访问结构体成员
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e1)->name);

}

void test1()
{
	int arr[] = { 2, 3, 4, 5, 6, 7, 8, 9, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);//需要引头文件 #include<stdlib.h>   
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test2()
{
	float f[] = { 3.0, 2.0, 7.0, 8.0, 9.0, 6.0, 5.0, 4.0, 1.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}

void test3()
{
	struct Stu s[3] = { { "zhangsan", 30 }, { "lisi", 20 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

void test4()
{
	struct Stu s[3] = { { "zhangsan", 30 }, { "lisi", 20 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}
int main()
{
	//Bubble_Sort(arr, sz);
	test1();
	printf("\n");
	test2();
	printf("\n");
	test3();
	test4();
	return 0;
}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	void* p = &a;  // void类型的指针可以接受任意类型的地址  不能解引用操作  不能进行+-正数的操作  但是能强制类型转化之后再操作
//	char ch = 'w';
//	p = &ch;
//	*((char*)p) = 'a';
//	printf("%c ",ch);
//	return 0;
//}