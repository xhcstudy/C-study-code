#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ö��

//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ - ����
//	MALE = 1,
//	FEMALE = 2,
//	SECRET = 4
//};
//
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};

//C����Դ���� ---> Ԥ���� ---> ���� ---> ���� ---> ��ִ�г���
//#define RED 0
//#define GREEN 1
//#define BLUE 2
//
//int main()
//{
//	//enum Sex s = MALE;
//	//enum Color c = BLUE;
//	//enum Color c = 2;//int   ���㲻����Ҳ�Ǵ���д��  int �޷�ת��Ϊ enum Color ����
//	int color = RED;
//	//printf("%d %d %d\n", RED, GREEN, BLUE);
//	//printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	return 0;
//}

//ö�ٵ��ŵ�
//Ϊʲôʹ��ö�� ?
//���ǿ���ʹ��#define���峣����Ϊʲô��Ҫʹ��ö�� ?
//ö�ٵ��ŵ� :
//1.���Ӵ���Ŀɶ��ԺͿ�ά����
//2.��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ���3.��ֹ��������Ⱦ(��װ)
//4.���ڵ���
//5.ʹ�÷��㣬һ�ο��Զ���������


//����(������) - ������
//����Ҳ��һ��������Զ������� �������Ͷ���ı���Ҳ����һϵ�еĳ�Ա����������Щ��Ա����ͬһ��ռ䣨��������Ҳ�й�����)
//�ص�:����������Ĵ�С������������Ա�Ĵ�С
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n",sizeof(u));
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}


//�жϵ�ǰ������Ĵ�С�˴洢
//����1
//int check_sys()
//{
//	int a = 1;//0x00 00 00 01
//	char* p = (char*)&a;
//	//����1��ʾС��     ����0��ʾ���
//	return *p;
//}
//int main()
//{
//	int ret = 0;
//	ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//����2
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	//����1 ��ʾС��    ����0��ʾ���
	return u.c;
}

int main()
{
	int ret = 0;
	ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}