#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ٶȱ�����
//���д�꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//#include <stddef.h>
//#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)
//
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
//	//struct S s  
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}


//ϰ��1 λ��
//#include <string.h>
//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstagPimData;
//	pstagPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstagPimData->ucPim1 = 2;
//	pstagPimData->ucData0 = 3;
//	pstagPimData->ucData1 = 4;
//	pstagPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);//02 29 00 00
//	return 0;
//}


//ϰ��2 �����������С
//union Un
//{
//	short s[7];
//	int a;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));//16  ����������Ա��С   ����Ҫ����������������������
//	return 0;
//}


//ϰ��3
int main()
{
	union
	{
		short k;
		char i[2];
	}*s, a;
	s = &a;
	s->i[0] = 0x39;
	s->i[1] = 0x38;
	printf("%x\n", s->k);//3839
	return 0;
}