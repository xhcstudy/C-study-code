#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ṹ��
//�ṹ�����͵�����
//�ṹ��������
//�ṹ������Ķ���ͳ�ʼ����
//�ṹ���ڴ����
//�ṹ�崫��
//�ṹ��ʵ��λ�Σ�λ�ε����&����ֲ�ԣ�
//ö��
//ö�����͵Ķ���
//ö�ٵ��ŵ�
//ö�ٵ�ʹ��
//����
//�������͵Ķ���
//���ϵ��ص�
//���ϴ�С�ļ���


//����sһ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������(����)
//����ѧ�� ���ԣ����� + �绰 + �Ա� + ����

//struct Stu
//{
//	char name[20]; //����
//	char tele[12];//�绰
//	char sex[10]; //�Ա�
//	int age;      //����
//}s2,s3;//�ֺŲ��ܶ�  ����ֱ����������ȫ�ֱ���
//int main()
//{
//	//�����Ľṹ�����
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}


//�����ṹ������
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;//ֻ��������������
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}* px;
//int main()
//{
//	px = &x;//��ʵ������ͬһ����
//	return 0;
//}


//�ṹ���������
//struct Node
//{
//	int data;
//	struct Node* next;//�����һ�����ĵ�ַ
//};
//int main()
//{
//	return 0;
//}


//typede 
//typedef struct Node
//{
//	int data;
//	struct Node* next;//�����һ�����ĵ�ַ
//}Node;
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}


//�ṹ���ڴ����
struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};
int main()
{
	struct S1 s1 = { 0 };
	struct S2 s2 = { 0 };
	printf("%d\n",sizeof(s1));
	printf("%d\n", sizeof(s2));
	return 0;
}