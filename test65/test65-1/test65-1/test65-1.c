#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
//�����Ķ�̬�ڴ����

//1.��NULL�Ľ����ò���
//int main()
//{
//	int* p = malloc(40);
//	//��һmallocʧ���ˣ�p�ͱ���ֵλNULL
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//2.�Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*p++ = i;
//		}
//	}
//	//pָ��Ŀռ��Ѿ������仯 
//	free(p);
//	p = null;
//	return 0;
//}

//5.��ͬһ�鶯̬�ڴ����ͷ�    free��֮�� ��ʹ�õ�ָ��p ������ΪNULL  ������Ч��ֹ ����ͷŵ�����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		;
//	}
//	free(p);
//	//.....
//	free(p);
//	return 0;
//}

//6.�Զ�̬���ٵĿռ������ͷ�(�ڴ�й¶)
#include <windows.h>
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}


//��������ı�����
//1.
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//������� ��ΪGetMemory��������֮��str ���ǿ�ָ�� ��strcpy�� �����Խ�����
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//1.�������л����
//2.��������ڴ�й¶������  
//str��ֵ���ݵ���ʽ��p   p��GetMemory�������βΣ�ֻ�ܺ����ڲ���Ч
//��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷţ������޷��ҵ������Ի�����ڴ�й¶

//�޸�1.
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	if (str == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		strcpy(str, "hello world");
//		printf(str);
//	}
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//�޸�2.
char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory(str);
	if (str == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		strcpy(str, "hello world");
		printf(str);
	}
	free(str);
	str = NULL;
}

int main()
{
	Test();
	return 0;
}