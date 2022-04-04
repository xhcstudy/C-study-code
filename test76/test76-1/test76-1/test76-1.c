#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//作业题1.
//typedef struct
//{
//	int a;
//	char b;
//	short c;
//	short d;
//}AA_t;
//
//int main()
//{
//	printf("%d\n", sizeof(AA_t));//12
//	return 0;
//}


//作业题2.
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));//16
//	printf("%d\n", sizeof(struct B));//12
//	return 0;
//}


//作业题3.
#pragma pack(4)//将默认对齐数设置为4
int main(int argc, char* argv[])
{
	struct tagTest1
	{
		short a;
		char d;
		long b;
		long c;
	};
	struct tagTest2
	{
		long b;
		short c;
		char d;
		long a;
	};
	struct tagTest3
	{
		short c;
		long b;
		char d;
		long a;
	};
	struct tagTest1 stT1;
	struct tagTest2 stT2;
	struct tagTest3 stT3;
	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));//12 12 16
}