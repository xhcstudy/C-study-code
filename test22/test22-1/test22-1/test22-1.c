#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//指针运算
//1.指针 +- 整数
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//		int i = 0;
//		int sz = sizeof(arr) / sizeof(arr[0]);
//		int* p = arr;
//	//	for (i = 0; i < sz; i++)
//	//{
//	//		printf("%d\n",*p);
//	//		p = p + 1;
//	//}
//		for (i = 0; i < 5; i++)
//		{
//			printf("%d\n", *p);
//			p += 2;
//		}
//	return 0;
//}

////2.指针 - 指针  得到两个指针中间的元素个数   两个指针应该要指向同一块空间  不能一个 int  一个char
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n",&arr[9] - &arr[0]);
//	//printf("%d\n", &arr[9] - &ch[0]);//不可取
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen  -   求字符串长度
//	//递归 - 模拟实现strelen - 计数器的方式1   ，  递归的方式2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n",len);
//	return 0;
//}

//3.指针的关系运算    
//标准规定:允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与指向第一个元素之前的那个内存位置的指针进行比较   
//方法1   由上述规定  通常选用方法1
//#define N_VALUES_S 5
//int main()
//{
//	float values[N_VALUES_S];
//	float* vp;
//	for (vp = &values[N_VALUES_S]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	return 0;
//}
//
////方法2
//#define N_VALUES_S 5
//int main()
//{
//	float values[N_VALUES_S];
//	float* vp;
//	for (vp = &values[N_VALUES_S - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//	}
//	return 0;
//}

//指针和数组
//数组名是首元素地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	//例外1.&arr - &数组名- 数组名不是首元素地址 - 数组名表示整个数组 - &数组名 取出的是整个数组的地址
//	//2.sizeof(arr)  -  sizeof(数组名）  -   数组名表示的是整个数组
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}

//数组可以通过指针进行访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p  ========  %p\n",p+i,&arr[i]);
//	}
//	return 0;
//}

//二级指针   存储指针变量的指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	//int*** pppa = &ppa;//pppa就是三级指针   同理四级五级指针往下类推
//	**ppa = 20;
//	printf("%d\n",**ppa);
//	printf("%d\n", a);
//	return 0;
//}

//好孩子 -  孩子
//指针数组 - 数组 - 存放指针的数组
//数组指针 - 指针
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//整形数组 - 存放整形
	//字符数组 - 存放字符
	//指针数组 - 存放指针
	int* arr[3] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ",*(arr[i]));
	}
	return 0;
}