#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("sum = %d\n",sum);
//	return 0;
//}

//�����ݹ�  �����������ı�̼��ɽ����ݹ�   ͨ����һ�����͸��ӵ�������ת��Ϊһ����ԭ�������ƵĹ�ģ��С�����������   ��Ҫ˼����ʽ�����»�С
//int main()
//{
//	printf("hehe\n");
//	main();  //�ݹ鳣������  stack overflow  ջ���
//	return 0;
//}
//�ڴ�Ữ��Ϊ��������    ջ��   ����    ��̬��
//ջ��     �ֲ�����    �����β�    ����������Ҫ��ջ��������ռ�
//����     ��̬���ٵ��ڴ�    malloc    calloc
//��̬��   ȫ�ֱ���    static���εı���

//�ݹ��������Ҫ����
// 1. ���������������������������������ʱ�򣬵ݹ鲻�ټ�����
// 2. ÿ�εݹ����֮��Խ��Խ�ӽ��������������

//��ϰ 1. ����һ�����������޷��ţ�������˳���ӡ����ÿһλ�����磺����1234�����1 2 3 4.
//void print(n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	printf("����һ���޷�������:");
//	scanf("%d",&num);//1234
//	//�ݹ�
//	print(num);
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4 ��1234��ֵ�ֻʣ��һ������  Ȼ�����δ�ӡ 
//	return 0;
//}

//��ϰ 2. ��д��������������ʱ���������ַ������ȡ�
#include<string.h>
////int my_strlen(char* str)
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("len = %d\n",len);
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬������Ԫ�صĵ�ַ
//	printf("len = %d\n",len);
//	return 0;
//}

//�ݹ��ڵ���
//����  �ظ�����һ������ ��һ����ѭ��
//��ϰ 3. ��n�Ľ׳ˡ��������������
//int factorial(int n)
//{
//	if (n > 1)
//	{
//		return n * factorial(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int ret = 0;
//	int input = 0;
//	printf("������Ҫ��׳˵�����:");
//	scanf("%d",&input);
//	ret = factorial(input);
//	printf("%d! = %d\n",input,ret);
//	return 0;
//}

//��ϰ 4. ���n��쳲����������������������
//int count = 0;
//int Fibonacci1(int n) // f(0) = 0  f(1) = 1    f(n) = f(n-1) + f(n-2) n > 2
////�ظ�����̫�� 
////Ҫ���40���� 
////  40   39 38
////  39   38 37      38   37  36
////....
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n > 2)
//	{
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//�Ľ�
//�����ķ���
int Fibonacci2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int ret = 0;
	int input = 0;
	printf("������Ҫ���쳲�������:");
	//TDD - ������������
	scanf("%d",&input);
	ret = Fibonacci2(input);
	printf("��%d��쳲�������Ϊ:%d\n",input,ret);
	//printf("n = 3���ֵĴ���:%d\n",count);//���ظ�����Ĵ���
	return 0;
}

//�����ݹ�ļ���������Ŀ�������о�����
// 1.��ŵ������
// 2.������̨������