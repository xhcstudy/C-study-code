#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ָ�����
//1.�ַ�ָ��
//2.����ָ��
//3.ָ������
//4.���鴫�κ�ָ�봫��
//5.����ָ��
//6.����ָ������
//7.ָ����ָ�������ָ��
//8.�ص�����
//9.ָ�������������Ľ���

//1.�ַ�ָ��
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n",arr);
//	printf("%s\n",pc);
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//abcdefΪ�������ʽ,���ܱ��޸�  �൱�ڽ����ַ��ĵ�ַa�ĵ�ַ����p
//	printf("%c\n",*p);
//	printf("%s\n",p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef"; //��Ϊ�����abcdef�ǳ������ʽ  ������Ȼ��������������  ��ʵ������������������abcdef����һ����ַ  �����鲻ͬ
//	const char* p2 = "abcdef"; //ʵ����p1��p2�ĵ�ַ����ͬ   ���Ǵ洢�����ݶ���ͬ   ����abcdef��a���׵�ַ
//	//if (p1 == p2)  // ��ӡhehe ()��p1��p2���ݶ���ͬ,����abcdef��a���׵�ַ��Ӧ��һ��32λ������  �ж���ȳ���
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	//if (arr1 == arr2)  arr1 �� arr2 ��ʾ���������Ԫ���׵�ַ   �׵�ַ����ͬ  ��ӡhaha
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	return 0;
//}

//3.ָ������  ������ �������ָ��
//int main()
//{
//	int arr[10];//��������
//	char ch[5];//�ַ�����
//	int* parr[4];//�������ָ������� - ָ������
//	char* pch[5];//����ַ���ָ������� - ָ������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*(arr[i]));
//	}
//	return 0;
//}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 2, 3, 4, 5, 6 };
	int arr3[] = { 3, 4, 5, 6, 7 };
	int* parr[] = { arr1, arr2, arr3 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ",*(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}