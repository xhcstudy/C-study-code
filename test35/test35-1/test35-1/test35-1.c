#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// int(*)[10]  ����һ������ָ������   int(*)(int*)  ����һ������ָ������
//����1 
//(*(void(*)())0)();  void(*)() - ����ָ������  (void(*)())0 ��0ǿ������ת��λ����ָ������  
// *(void(*)())0 ������������� �൱���ҵ��������    (*(void(*)())0)()�����ǵ����������
//����2
//void (*signal(int , void(*)(int)))(int);//��ʵ����һ�κ�������   ���������� void (*) (int) �Ǻ���ָ������    signal �� ������   (int , void(*)(int)) �Ǻ�������
//���ǲ���д��void(*)(int)  signal  (int , void(*)(int)); ������ʽ
//���ǿ��Լ�  ����:
//typedef void(*pfun_t)(int);//��void (*) (int) ���� tpyedef Ϊ pfun_t
//typedef unsigned int uint;
//pfun_t signal(int, pfun_t);

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int(*p)(int, int) = Add;
//	printf("%d\n", p(2, 3));
//	printf("%d\n", (*p)(2, 3));
//	return 0;
//}

//����ָ������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//ָ������
//	int* arr[5];
//	int(*p)(int, int) = Add;//Sub Mul Div
//	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };//����ָ������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));
//	}
//	return 0;
//}

char* my_strcpy(char* dest, const char* src);
//дһ������ָ���ܴ��my_strcpy
char* (*p)(char*, const char*);
//дһ������ָ�����飬�ܴ��4��my_strcpy�����ĵ�ַ
char* (*parr[4])(char*, const char*);