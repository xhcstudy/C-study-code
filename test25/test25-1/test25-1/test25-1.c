#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ṹ��
//1 . �ṹ����������  
//2 . �ṹ���ʼ��  
//3 . �ṹ���Ա����   
//4 . �ṹ�崫��
//1 . �ṹ����������   �ṹ����һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���

//struct tag
//{
//	member - list;
//}variable - list;
//��ѧ��Ϊ��   ����һ��ѧ��   ���� ���� �绰 �Ա�
//struct - �ṹ��ؼ���    Stu - �ṹ���ǩ      struct Stu - �ṹ������  ;����ȱ��

//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[11];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ�����

//2.�ṹ���ʼ��
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[11];
//	char sex[5];
//}Stu;//���ṹ������������ΪStu
//
//int main()
//{
//	struct Stu s = { "СФ", 20, "18073666087", "��" };//��ʼ��  �ֲ�����
//	Stu s1;
//	return 0;
//}


//3 . �ṹ���Ա���� 
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;//�ṹ��ĳ�Ա�����������ṹ��
//	char* pc;
//};
//
//int main()
//{
//	struct T t = { "hehe", {10, 'w', "hello world", 3.14 }, NULL };
//	printf("%s\n",t.ch);
//	printf("%s\n", t.s.arr);
//	return 0;
//}

//4 . �ṹ�崫��
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//���ṹ������������ΪStu
//
//void Print1(Stu s)
//{
//	printf("name:  %s\n",s.name);
//	printf("age:   %d\n", s.age);
//	printf("tele:  %s\n", s.tele);	
//	printf("sex:   %s\n", s.sex);
//}
//
//void Print2(Stu* s)
//{
//	printf("name:  %s\n", s->name);
//	printf("age:   %d\n", s->age);
//	printf("tele:  %s\n", s->tele);
//	printf("sex:   %s\n", s->sex);
//}
//int main()
//{
//	struct Stu s = { "СФ", 20, "18073666087", "��" };//��ʼ��  �ֲ�����
//	//��ӡ�ṹ������
//	Print1(s);
//	Print2(&s);//���ֱȽϺ�  ����Ϊ�βο��ٿռ�  ����ʱ���
//	//��������ʱ����������Ҫѹջ���������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�������½���
//	//���ۣ��ṹ�崫�ε�ʱ��Ҫ���ṹ���ַ
//	return 0;
//}

//ѹջ
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);
	return 0;
}