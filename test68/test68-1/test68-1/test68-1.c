#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
//struct S
//{
//	int n;
//	char c;
//	int arr[0];//���������Ա
//};

//����1
//struct S
//{
//	int n;
//	int arr[];//���������Ա
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S));
//	int i = 0;
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		p->n = 100;
//		for (i = 0; i < 10; i++)
//		{
//			p->arr[i] = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p->arr[i]);
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//����2
struct S
{
	int n;
	int* arr;
};

int main()
{
	int i = 0;
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps != NULL)
	{
		ps->arr = (int*)malloc(40);
		ps->n = 100;
	}
	if (ps->arr != NULL)
	{
		for (i = 0; i < 10; i++)
		{
			ps->arr[i] = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", ps->arr[i]);
		}
	}
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}

//����2�ܴﵽ����1��Ч�� ���Ǵ���1��ʽ�ϸ���
//��������malloc��free�������׳���
//���Ҷ�̬�ڴ�ռ���һ���������ٳ����ģ�����ڴ���2ʵ�ֳ����ڴ���Ƭ����һЩ,�ռ������ʸ���
//�������ٵĿռ��ڴ���ʵ�Ч�ʸ���