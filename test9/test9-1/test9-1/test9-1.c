#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<math.h>
//д���뽫�������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	printf("������������:");
//	scanf("%d%d%d", &a, &b, &c);
//	//�㷨ʵ��a�з����ֵ��b��֮��c�з���Сֵ
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//дһ�������ӡ1-100֮������3�ı���������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == i % 3)
//			printf("%d ", i);
//	}
//	return 0;
//}

//�����������������������Ĺ�Լ��  շת�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	printf("������������:");
//	scanf("%d%d",&a,&b);
//	while (a % b)
//	{
//		if (a < b)
//		{
//			temp = a;
//			a = b;
//			b = temp;
//		}
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("���Լ��Ϊ��%d\n", b);
//	return 0;
//}

//��ӡ1000�굽2000�������   �����ܱ�4�������ǲ��ܱ�һ������ �����ܱ��İ�����
//int main()
//{
//	int i = 0;
//	int count = 0;
//	printf("1000�굽2000��������У�\n");
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	if (2001 == i)
//	{
//		printf("\n����%d������\n",count);
//	}
//	return 0;
//}

//��ӡ100-200֮�������  ����ֻ�ܱ�1������������  
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	printf("100 - 200֮���������:");
//	for (i = 100; i <= 200; i++)
//	{
//		for (n = 2; n < i; n++) // �Գ���  ����2 -> i-1
//		{
//			if (i % n == 0)
//			{
//				break;
//			}
//		}
//		if (i == n)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	if (i == 201)
//	{
//		printf("\n����%d������\n", count);
//	}
//	return 0;
//}

//�Ż�֮��   ���һ������������ һ����д�� i = a*b   ��ʱ  a��b��  ������һ�������� <= ��ƽ����i  // sqrt(i)     ż������2������������ i++���Ըĳ�i+=2
//int main()
//{
//		int i = 0;
//		int n = 0;
//		int count = 0;
//		//sqrt - ��ƽ������ѧ�⺯��   #include<math.h>
//		printf("100 - 200֮���������:");
//		for (i = 101; i <= 200; i+=2)  //ż������2������������
//		{
//			for (n = 2; n <= sqrt(i); n++) // �Գ���  ����2 -> i-1
//			{
//				if (i % n == 0)
//				{
//					break;
//				}
//			}
//			if (n > sqrt(i))
//			{
//				printf("%d ", i);
//				count++;
//			}
//		}
//		if (i == 201)
//		{
//			printf("\n����%d������\n", count);
//		}
//	return 0;
//}

//��д������һ�� 1-100�����������г��ֶ��ٸ�����9    ��λ9��ʮλ9
//int main()
//{
//	int i = 0;
//	int ge = 0;
//	int shi = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		ge = i % 10;
//		shi = i / 10;
//		if (ge == 9)
//		{
//			count++;
//		}
//		if (shi == 9)
//		{
//			count++;
//		}
//	}
//	printf("1-100�����������г�����%d������9\n", count);
//	return 0;
//}

//�������  ����1/1 - 1/2 + 1/3 - 1/4 + 1/5 ....+ 1/99 - 1/100
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	double xiang = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}

//��10�����������ֵ
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int max = arr[0];//��Ϊ���ֵ  ,��Ҫÿ�ζ���ֵ 0  ������ȫΪ�����п��ܵ��´�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int a = 0;//��
//	int b = 0;//��
//	int c = 0;//�˷����
//	for (a = 1; a <= 9; a++)
//	{
//		//��ӡһ��
//		for (b = 1; b <= a; b++)
//		{
//			c = a * b;
//			printf("%d * %d = %-2d  ", a, b, c);  //%2d ��ʾ��ӡ�������ʱ���ӡ����λ��   �����������   ����Ϊ�Ҷ���  ����Ϊ�����
//		}
//		if (b > a)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}

//��������Ϸ
//1.���Ի�����һ�������
//2.������
#include<stdlib.h>
#include<time.h>
////��Ϸ����
////1.����һ�������
////2.������
//void game()
//{
//	int guess = 0;
//	int ret = 0;
//	ret = rand() % 100 + 1;//����1 - 100֮�������
//
//	while (guess != ret)
//	{
//		printf("�������: ->");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���,�����²�\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��,�����²�\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//		}
//	}
//}
////��Ϸ�˵�����
//void meun()
//{
//	printf("#####################################\n");
//	printf("######        ��ѡ��           ######\n");
//	printf("####    1. play       0. exit    ####\n");
//}
//int main()
//{
//	int input = 0;
//	// srand�����趨rand������������������   ��rand()������srand()������Ҫ��ͷ�ļ� #include<stdlib.h>
//	// srand()����Ҫһ�������  ��ʱ�����������������������
//	//time_t time(time_t* timer)   time_t ��ʵ��������һ��long�����ͱ�tpyedef    ��time()������Ҫ��ͷ�ļ� #include<time.h>
//	srand((unsigned int)time(NULL));
//	do
//	{
//		meun();
//		printf("��ѡ��: ->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//goto���
//int main()
//{
//	again:
//	printf("hello bit!\n");
//	goto again;
//	return 0;
//}

//�ػ�����
#include<windows.h>
#include<string.h>
int main()
{
	//shutdowun -s -t 60 //���� 60s֮�ڹػ�  ȡ��:������ shutdown -a
	// cmd  command - ������
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("��ע����ĵ��Խ���һ�����ڹػ�,�����������˧�磬��ȡ���ػ�\n������->:");
	scanf("%s", input);
	if (strcmp(input, "����˧��") == 0)
	{
		system("shutdown -a");
		printf("�ػ��Ѿ���ȡ��\n");
	}
	else
	{
		goto again;
	}
	return 0;
}