#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ṹ�崫��   ����ѡ��ַ
//�������ε�ʱ��,��������Ҫѹջ������ʱ��Ϳռ��ϵ�ϵͳ����,
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���

struct S
{
	int a;
	char c;
	double d;
};

void Init(struct S* ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}

//��ֵ
void Print1(struct S temp)
{
	printf("%d %c %lf\n", temp.a, temp.c, temp.d);
}

//��ַ
void Print2(const struct S* ps)
{
	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
}

int main()
{
	struct S s = { 0 };
	Init(&s);
	//Print1(s);
	Print2(&s);
	return 0;
} 