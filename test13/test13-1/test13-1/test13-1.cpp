#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//����
//������һ����ͬ����Ԫ�صļ���  tpye_t  arr_name [const_n(�������ʽ)];
#include<string.h>
//int main()
//{
//	//����һ������-�������-10��
//	int arr1[10] = {1,2,3};//����ȫ��ʼ��,ʣ��Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5 + 3] = {'a',98};
//	char arr3[5] = "ab";//ok
//	char arr4[] = "abcdef";//Ĭ�Ϸ�7��Ԫ��
//  char arr5[] = {'a','b','c'}//��3��Ԫ��
//	printf("%d\n",sizeof(arr4));//  7   sizeof(arr4)��������arr4��ռ�ռ�Ĵ�С'\0'Ҳ�����ų�����  char����Ԫ����ռ�ռ��СΪһ���ֽ�
//	printf("%d\n",strlen(arr4));//  6   strlen�Ǽ���'\0'֮ǰ���ַ������� '\0' ��������
//	//int n = 5;
//	//char ch[n];//err   []�в����Ǳ���ֻ���ǳ���
//	return 0;
//}

//int main()
//{
//	char arr1[] = {'a','b','c'};
//	char arr2[] = "abc";
//	printf("%d\n", sizeof(arr1));//3
//	printf("%d\n", sizeof(arr2));//4
//	printf("%d\n", strlen(arr1));//����� ��Ϊarr2��û��'\0'  ֱ�������'\0'֮��ֹͣ
//	printf("%d\n", strlen(arr2));//3
//	return 0;
//}

//һά�����ʹ��  []  �±����ò�����  ����Ԫ�صķ��ʲ�����
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = {1,2,3,4,5,6,7,8,9,0};
//	//printf("%c\n",arr1[3]);//d
//	int i = 0;
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	int len = strlen(arr1);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ",arr1[i]);//arr[i] ���������ʱ��[]�в��ܷű��������Ƿ���Ԫ���ñ���û����
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//	return 0;
//}

//һά�������ڴ��еĴ洢
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n",i,&arr[i]);//ÿ��Ԫ��֮���ַ 16�������4��int ռ4���ֽڣ�˵��һά���������ڴ���������ŵ�
//	}
//	return 0;
//}

//��ά����Ĵ����ͳ�ʼ��
//int main()
//{
//	int arr1[3][4] = { { 1, 2, 3 },{ 4, 5} };
//	char arr2[5][6];
//	int arr3[][4] = {1,2,3,4,5,6,7,8};//�в���ʡ��
//	return 0;
//}

//��ά�����ʹ��  ��Ȼ��ͨ���±���ʹ��
//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%-4d",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��ά�������ڴ��еĴ洢   ��ά������������Ϊһά���������
int main()
{
	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
	int i = 0;
	int j = 0;
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 4; j++)
			{
				printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);//��ά�������ڴ���Ҳ��������ŵ�
			}
		}
	return 0;
}