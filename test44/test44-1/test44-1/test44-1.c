#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;	
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6,12
//	return 0;
//}

//дһ����������������һ���ַ���������
//#include <assert.h>
//#include <string.h>
//char* str_reverse(char* str)
//{
//	int len = strlen(str);
//	assert(str != NULL);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char temp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = temp;
//		left++;
//		right--;
//	}
//	return str;
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s",arr);
//	gets(arr);
//	char* str = str_reverse(arr);
//	printf("%s\n", str);
//	return 0;
//}

//�������  ��Sn = a + aa + aaa + aaaa + aaaaa + aaaaaa��ǰ����֮�ͣ�����a��һ������
//int get_sum(int a, int n)
//{
//	int sum = 0;
//	int i = 0;
//	int ret = 0;//ÿһ��
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	sum = get_sum(a, n);
//	printf("%d\n",sum);
//	return 0;
//}

//��ӡˮ�ɻ���(������)   ˮ�ɻ�����ָһ��nλ�������λ���ֵ�n�η�֮��ǡ�õ��ڸ���������153 = 1^3 + 5^3 + 3^3,��153��һ��ˮ�ɻ���
//���0-100000֮�������ˮ�ɻ��������
//��λ��
#include <math.h>
//int get_wei(int n)
//{
//	int count = 0;
//	if (n > 9)
//	{
//		return 1 + get_wei(n / 10);
//	}
//	return 1;
//}
//
////��ÿһλ
//int get_bit(int m,int n)
//{
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = m % 10;
//		m = m / 10;
//	}
//	return ret;
//}
//
////��ÿλ��n�η�֮��
//int get_sum(int i, int n)
//{
//	int ret = 0;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = get_bit(i, j);//�����i��ÿһλ
//		sum = sum + (int)pow(ret,n);//����η���pow����  ��Ҫ#include <math.h>
//	}
//	return sum;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int sum = 0;
//		//�ж�i�Ƿ�Ϊˮ�ɻ���(������)
//		//1.����i��λ�� - nλ��
//		int n = 0;
//		n = get_wei(i);
//		//2.����i��ÿһλ��n�η�֮��
//		sum = get_sum(i, n);
//		//3.�Ƚ�i
//		if (i == sum)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//��ӡ����
//#include <string.h>
//void Print_Diamond(int line)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < line; i++)//��ӡ�ϰ벿��
//	{
//		for (j = 0; j < line - 1 - i; j++)//��ӡÿ�еĿո�
//		{
//			printf(" ");
//		}
//		for (k = 0; k < 2 * i + 1; k++)//��ӡÿ�е�*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)//��ӡ�°벿��
//	{
//		for (j = 0; j <= i; j++)//��ӡÿ�пո�S
//		{
//			printf(" ");
//		}
//		for (k = 2 * (line - 1) ; k > 2 * i + 1; k--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int line = 0;
//	scanf("%d",&line);//һ�������
//	Print_Diamond(line);
//	return 0;
//}