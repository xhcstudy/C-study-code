#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ṹ���ڴ����
//���ȵ����սṹ��Ķ������;
//1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
//2.������Ա����Ҫ���뵽ĳ�����֣�������)���������ĵ�ַ��.������ = ������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ��
//VS��Ĭ�ϵ�ֵΪ8
//3.�ṹ���ܴ�СΪ����������ÿ����Ա��������һ��������)����������
//4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С����������������(��Ƕ�׽ṹ��Ķ�����)����������

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	struct S2 s2 = { 0 };
//	struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	printf("%d\n", sizeof(s3));//16
//	printf("%d\n", sizeof(s4));//32
//	return 0;
//}


//Ϊʲô�����ڴ����?
//�󲿷ֵĲο����϶�������˵��
//1.ƽ̨ԭ��(��ֲԭ��) : �������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵ�; ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ�ض����͵����ݣ������׳�Ӳ���쳣��
//2.����ԭ��:���ݽṹ(������ջ)Ӧ�þ����ܵ�����Ȼ�߽��϶��롣ԭ�����ڣ�Ϊ�˷���δ������ڴ棬��������Ҫ�������ڴ����; ��������ڴ���ʽ���Ҫһ�η��ʡ�
//������˵ :
//�ṹ����ڴ�������ÿռ�����ȡʱ���������


//�޸�Ĭ�϶�����
//֮ǰ���Ǽ�����#pragma���Ԥ����ָ����������ٴ�ʹ�ã����Ըı����ǵ�Ĭ�϶�������
//#pragma pack(4)//����Ĭ�϶�����Ϊ4
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶�����
//
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}


//�ٶȱ�����
//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//���죺offsetof��ʵ��
#include <stddef.h>
struct S
{
	char c;
	int i;
	double d;
};
int main()
{
	//offsetof();��
	printf("%d\n", offsetof(struct S, c));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, d));
	return 0;
}