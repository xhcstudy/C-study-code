#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//vc���� c���Ե��Լ���
//Debug �� Release�Ľ���
//Debugͨ��Ϊ���԰汾 ������������Ϣ ���Ҳ����κ��Ż�  ���ڳ���Ա���Գ���
//Release��Ϊ�����汾 �������ǽ����˸����Ż���ʹ�ó����ڴ����С�������ٶ��϶������ŵģ��Ա��û��ܺõ�ʹ��
//test.c  ->  .exe ��ִ�г���
//Debug   ->  Debug�汾�Ŀ�ִ�г���      31kb   ���Ե��Եģ���Ϊ�ļ��а����˵�����Ϣ
//Release ->  Release�汾�Ŀ�ִ�г���    7kb    ���ܽ��е���
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ",i);
//	}
//	system("pause");
//	return 0;
//}

//Release�汾�����Debug�汾��������Щ�Ż��أ�
//Debug�汾�������Ϊ��ѭ��
//Release�汾��������ӡ13��hehe
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//windows�������Խ���  ע:linux�����������Թ�����gdb
//1.���Ի�����׼��   �ĳ�Debug

//2.ѧ���ݼ�
// F5  �������ԣ���������ֱ�ӵ�����һ���ϵ㴦(ִ���߼�����һ���ϵ�)��   Ҫ��F9���ʹ��
// F9  �����ϵ��ȡ���ϵ�  �ϵ����Ҫ���ã������ڳ��������λ�����öϵ㡣�����Ϳ���ʹ�ó�������Ҫ��λ������ִֹͣ�У��̶�һ����ִ����ȥ��  ���öϵ�
// F10 ����̣�ͨ����������һ�����̣�һ�����̿�����һ�κ������ã�������һ����䡣
// F11 ����䣬����ÿ�ζ�ִ��һ����䣬���������ݼ�����ʹ���ǵ�ִ���߼����뺯���ڲ�(������õ�)��
// CTRL + F5   ��ʼִ�в����ԣ������������ĳ���ֱ�����������������ԾͿ���ֱ��ʹ�á�
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ",i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ",10 - i);
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);//��ʽ���뺯���ڲ���ҪF11  F10�Ѻ������ÿ���һ������  ֱ�����������뺯���ڲ�
//	return 0;
//}

//3.���Ե�ʱ��鿴����ǰ��Ϣ
//�鿴��ʱ������ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//���ö�ջ
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}


//һЩ���Ե�ʵ��
//ʵ��1  ʵ�ִ��룺��1! + 2! + 3! + ... + n!;���������
//��д
//int get_factorial(int n)
//{
//	if (n > 1)
//	{
//		return n * get_factorial(n - 1);
//	}
//	return 1;
//}
//int get_factorial_sum(int n)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += get_factorial(i);
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0; 
//	int sum = 0;
//	scanf("%d",&n);
//	sum = get_factorial_sum(n);
//	printf("sum = %d\n",sum);
//	return 0;
//}

//���Դ���
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d",&n);//3 1! + 2! + 3! = 1 + 2 + 3 = 9
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;//retÿ������һ�ν׳�Ӧ����1 erro
//		}
//		sum += ret;
//	}
//	printf("sum = %d\n",sum);
//	return 0;
//}

//��ѭ��ԭ�� 
//main������i������arr���Ǿֲ��������ֲ���������ջ�ϴ洢�ģ���ջ��Ĭ����ʹ�øߵ�ַ���Ŀռ䣬��ʹ�õ͵�ַ�Ŀռ䣬�������������±���������ַ���ɵ͵��߱仯
//������Խ���������ʱ�����п���Խ����ʵ�i�ĵ�ַ��Ȼ��ı������ʱ�򣬽�i�ı䣬�Ӷ�������ѭ��
//int main()
//{
//	int i = 0;//���������ԭ��  ����ı䶨��i������arr��˳��Ͳ��������ѭ��  �����Իᱨ�� ������Խ��
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//VC6.0 ������ <= 10 ����ѭ��   ˵���ڴ沼�ֿռ䲻ͬ
//	//gcc ������   <= 11 ����ѭ��
//	//VS2013       <= 12 ����ѭ��
//	printf("%p\n", arr);//Debug�汾i�ĵ�ַ��������arr��ַ   Release�汾�Ż�֮������arr��ַ����i�ĵ�ַ
//	printf("%p\n", &i);
//	//for (i = 0; i <= 11; i++)
//	//{
//	//	printf("hehe\n");
//	//	arr[i] = 0;
//	//}
//	system("pause");
//	return 0;
//}

//ģ��ʵ�ֿ⺯��strcpy
//�Ż�֮ǰ
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//���'\0'������ȥ
//}

//�Ż�֮��
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)//�жϲ���Ϊ��ָ��   ����ᵼ�³������  ���ǻ���Դ���
//	{
//		while (*dest++ = *src++)//�ж�����ʱ����ɸ�ֵ  ���Ҹ�ֵ'\0'ʱ ���ʽ��ֵΪ0  ����ѭ��
//		{
//			;
//		}
//	}
//}

//��һ���Ż�
#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//�����Ż�
//char* my_strcpy(char* dest, const char* src)//const ��src�������� ��ֹд������ ��д�� src���ܱ��ı�ᱨ��
//{
//	char* ret = dest;//����dest����ʼ��ַ
//	assert(dest != NULL);//����
//	assert(src != NULL);
//	while (*dest++ = *src++)//�ж�����ʱ����ɸ�ֵ  ���Ҹ�ֵ'\0'ʱ ���ʽ��ֵΪ0  ����ѭ��
//	{
//		;
//	}
//	return ret;//����dest��ʼ��ַ
//}
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "##########################";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����  һ�������ķ���ֵ��Ϊ����һ�������Ĳ���
//	return 0;
//}

//����const��ָ��
//int main()
//{
//	const int num = 10;
//	int* const p = &num;
//	//const ����ָ�����*���ʱ�����ε���*p,Ҳ����˵������ͨ��p���ı�*p(num)��ֵ
//	//const ����*�ұ�ʱ�����ε���p�����ܸı�p��ֵ(��ַ)
//	//const int* const p  constͬʱ���ε�ַ������  �����ܸı�
//	*p = 20;
//	printf("%d\n",num);
//	int n = 100;
//	p = &n;
//	return 0;
//}

//ģ��ʵ��strlen
int my_strlen(const char* str)
{
	int len = 0;
	assert(str != NULL);
	while (*str++ != '\0')
	{
		len++;
	}
	return len;
}
int main()
{
	char arr[] = "bit";
	int len = 0;
	printf("len = %d\n",my_strlen(arr));
	return 0;
}

//���볣���Ĵ���
//�����Ĵ�����ࣺ
//1.�����ʹ���   ֱ�ӿ�������ʾ��Ϣ(˫��)��������⡣����ƾ�辭��Ϳ��Ը㶨�������˵�򵥡�
//2.�����ʹ���   ��������ʾ��Ϣ����Ҫ�ڴ������ҵ�������Ϣ�еı�ʶ����Ȼ��λ�������ڡ�һ���Ǳ�ʶ�������ڻ���ƴд����
//3.����ʱ����   �������ԣ��𲽶�λ���⣬���Ѹ�