#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//calloc
//C���Ի��ṩ��һ��������ca1loc, ca11oc ����Ҳ������̬�ڴ���䡣ԭ������ :
//void* ca1loc(size_t num��size_t size); num - Ԫ�ظ���  size - ÿ��Ԫ�ش�С(�ֽ�)
//�����Ĺ�����Ϊnum ����СΪsize��Ԫ�ؿ���һ��ռ䣬���Ұѿռ��ÿ���ֽڳ�ʼ��Ϊ0��
//�뺯��mal1oc ������ֻ���� cal1oc ���ڷ��ص�ַ֮ǰ������Ŀռ��ÿ���ֽڳ�ʼ��Ϊȫ0��
//#include <stdio.h>
//#include <stdlib.h>

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ�
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc
//realloc�����ĳ����ö�̬�ڴ���������
//��ʱ�����Ƿ��ֹ�ȥ����Ŀռ�̫С�ˣ���ʱ�������ֻ��������Ŀռ�����ˣ���Ϊ�˺����ʹ���ڴ棬����һ������ڴ�Ĵ�С�����ĵ�����
//��real1oc�����Ϳ��������Զ�̬�����ڴ��С�ĵ���������ԭ������ :
//void* rea1loc(void* ptr, size_t size);
//ptr��Ҫ�������ڴ��ַ
//size����֮���´�С(�ֽ�)
//����ֵΪ����֮����ڴ���ʼλ�á�(�п�����ԭ��ʼ��ַ��Ҳ�п������µ���ʼ��ַ)
//�����������ԭ�ڴ�ռ��С�Ļ����ϣ����Ὣԭ���ڴ��е������ƶ����µĿռ䡣

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
//			*(p + i) = i;
//		}
//	}
//	//��������ʹ��malloc���ٵ�40���ֽڵĿռ�
//	//�������40���ֽڲ����������ǵ�ʹ����
//	//����ϣ���ܹ���60���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//
//	//reallocʹ�õ�ע������
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�
//	//��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3.���realloc����ʧ��,�᷵�ؿ�ָ�룬��ԭ���ռ��ַ�ĳ�NULL����ʧ��ַ
//	//4.���Ե���һ���µı���������realloc�ķ���ֵ
//	int* ptr = realloc(p, 60);
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 10; i < 15; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 15; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}


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
int main()
{
	int a = 10;
	int* p = &a;
	free(p);
	p = NULL;
	return 0;
}