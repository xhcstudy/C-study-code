#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//ָ������
//1.ָ�� +- ����
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//		int i = 0;
//		int sz = sizeof(arr) / sizeof(arr[0]);
//		int* p = arr;
//	//	for (i = 0; i < sz; i++)
//	//{
//	//		printf("%d\n",*p);
//	//		p = p + 1;
//	//}
//		for (i = 0; i < 5; i++)
//		{
//			printf("%d\n", *p);
//			p += 2;
//		}
//	return 0;
//}

////2.ָ�� - ָ��  �õ�����ָ���м��Ԫ�ظ���   ����ָ��Ӧ��Ҫָ��ͬһ��ռ�  ����һ�� int  һ��char
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n",&arr[9] - &arr[0]);
//	//printf("%d\n", &arr[9] - &ch[0]);//����ȡ
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen  -   ���ַ�������
//	//�ݹ� - ģ��ʵ��strelen - �������ķ�ʽ1   ��  �ݹ�ķ�ʽ2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n",len);
//	return 0;
//}

//3.ָ��Ĺ�ϵ����    
//��׼�涨:����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ����ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�   
//����1   �������涨  ͨ��ѡ�÷���1
//#define N_VALUES_S 5
//int main()
//{
//	float values[N_VALUES_S];
//	float* vp;
//	for (vp = &values[N_VALUES_S]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	return 0;
//}
//
////����2
//#define N_VALUES_S 5
//int main()
//{
//	float values[N_VALUES_S];
//	float* vp;
//	for (vp = &values[N_VALUES_S - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//	}
//	return 0;
//}

//ָ�������
//����������Ԫ�ص�ַ
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	//����1.&arr - &������- ������������Ԫ�ص�ַ - ��������ʾ�������� - &������ ȡ��������������ĵ�ַ
//	//2.sizeof(arr)  -  sizeof(��������  -   ��������ʾ������������
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}

//�������ͨ��ָ����з���
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p  ========  %p\n",p+i,&arr[i]);
//	}
//	return 0;
//}

//����ָ��   �洢ָ�������ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	//int*** pppa = &ppa;//pppa��������ָ��   ͬ���ļ��弶ָ����������
//	**ppa = 20;
//	printf("%d\n",**ppa);
//	printf("%d\n", a);
//	return 0;
//}

//�ú��� -  ����
//ָ������ - ���� - ���ָ�������
//����ָ�� - ָ��
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//�������� - �������
	//�ַ����� - ����ַ�
	//ָ������ - ���ָ��
	int* arr[3] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ",*(arr[i]));
	}
	return 0;
}