#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//��������
//Ҳ�������û����˵����������(flexible array)������������ȷʵ�Ǵ��ڵġ�C99�У��ṹ�е����һ��Ԫ��������δ֪��С�����飬��ͽ������������须��Ա��
//����������ص�:
//�ṹ�е����������Աǰ���������һ��������Ա��
//sizeof���ص����ֽṹ��С����������������ڴ档
//�������������Ա�Ľṹ��malloc()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С��

//struct S
//{
//	int n;
//	int arr[10];
//};

//struct S
//{
//	int n;
//	int arr[];//δ֪��С��
//};

//struct S
//{
//	int n;
//	int arr[0];//δ֪��С�� - ���������Ա
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));
//	struct S* ps = (struct S*)malloc(10, sizeof(int));
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		ps->n = 100;
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			ps->arr[i] = i;//0 1 2 3 4
//		}
//	}
//	struct S* ptr = (struct S*)realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = (int*)malloc(5 * sizeof(int));
//	if (ps->arr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(ps->arr + i) = i;
//		}
//		for (i = 0; i < 5; i++)
//		{
//			printf("%d ", *(ps->arr + i));
//		}
//	}
//	//������С
//	int* ptr = (int*)realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(ps->arr + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(ps->arr + i));
//	}
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//��������1�ʹ���2�������ͬ���Ĺ��ܣ����Ƿ���1��ʵ���������ô�:��һ���ô��� : �����ڴ��ͷ�
//������ǵĴ�������һ���������õĺ����У������������˶����ڴ���䣬���������ṹ�巵�ظ��û���
//�û�����free�����ͷŽṹ�壬�����û�����֪������ṹ���ڵĳ�ԱҲ��Ҫfree�������㲻��ָ���û�����������¡�
//���ԣ�������ǰѽṹ����ڴ��Լ����ԱҪ���ڴ�һ���Է�����ˣ������ظ��û�һ���ṹ��ָ�룬�û���һ��free�Ϳ��԰����е��ڴ�Ҳ���ͷŵ���
//�ڶ����ô��� : ���������ڷ����ٶ�.
//�������ڴ���������߷����ٶȣ�Ҳ�����ڼ����ڴ���Ƭ��(��ʵ���Ҹ��˾���Ҳû����ˣ��������ܲ���Ҫ����ƫ�����ļӷ���Ѱַ��
