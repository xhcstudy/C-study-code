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
//	//printf("%d\n", strlen(&arr));			//6 ���ǻ��о���  �������Ͳ�ͬ
//	//printf("%d\n", strlen(&arr + 1));		//���ֵ
//	//printf("%d\n", strlen(&arr[0] + 1));	//5
//
//	char *p = "abcdef";
//	//p�����ʵ����'a'�ĵ�ַ
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
//	printf("%d\n", strlen(&p));			//���ֵ  &p��Ӧ����һ������ָ��  ���о���  �������Ͳ�ͬ
//	printf("%d\n", strlen(&p + 1));		//���ֵ  �������Ͳ�ͬ
//	printf("%d\n", strlen(&p[0] + 1));	//5
//	return 0;
//}

//��ά����
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