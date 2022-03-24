 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//3.
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//4.
//int main()
//{
//	int a[3][2] = { ( 0, 1 ), ( 2, 3 ), ( 4, 5 ) };//逗号表达式  元素其实是 { 1, 3, 5 }
//	int* p;
//	p = a[0]; //a[0]是第一行首元素地址
//	printf("%d",p[0]);
//	return 0;
//}

//5.
int main()
{
	int a[5][5];
	int(*p)[4];
    p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]); // p[4] - *(p+4) - 指向a[3][1]的元素到a[3][4]的四个元素构成的数组 &p[4][2] - &a[3][3]
	// &p[4][2] - &a[4][2] 指针 - 指针  得到的是指针之间元素个数 -4   
	//-4    11111111111111111111111111111101    %p打印就是FFFFFFFC    %d打印就是-4
	return 0;
}