#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//����:�ӳ�����һ�����ͳ����еĲ��ִ��룬��һ������������ɡ����������ĳ���ض����񣬶���������������룬�߱���ԵĶ�����
//һ���������������з���ֵ���ṩ�Թ��̵ķ�װ��ϸ�ڵ����ء���Щ����ͨ��������Ϊ����⡣
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n",sum);
//	return 0;
//}

// ����
//	1.�⺯��   www.cplusplus.com
// ���õĿ⺯���У�  IO����  �ַ�����������  strlen  �ַ���������  �ڴ��������  memset  ʱ��/���ں���  time   ��ѧ����  sqrt   �����⺯��
//	2.�Զ��庯��
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#########";
//	strcpy(arr2,arr1);//��arr1�е�bit��'\0'������arr2���� ���Ժ����#����ʾ  arr2[]���"bit\0#####"
//	printf("%s\n",arr2);
//	//strcpy -  string copy  -  �ַ�������   
//	//strlen -  string length - �ַ��������й�
//	return 0;
//}

//memset   #include<string.h>
//memory - �ڴ� set - ����
//#include<string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//��arr��ʼ������ֽ����ݸ��ĳ�*   ���ĵ����ݲ������ ���ܳ���ԭ�洢���ֽ���
//	printf("%s\n",arr);//***** world
//	return 0;
//}

//�Զ��庯��
//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n",max);
//	max = get_max(100, 200);
//	printf("max = %d\n",max);
//	return 0;
//}

//дһ�������������������α���������
//void swap1(int x, int y)//������ɽ����������α�����������Ϊ x,y �� a,b�ĵ�ַ��ͬ���������е���swap1֮��ֻ����x,y��ֵ�����˽���������ӡ������a,b����ԭ������
//{
//	int temp = 0;
//	temp = y;
//	y = x;
//	x = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//    //����swap1����   ��ֵ����
//	swap1(a, b);
//	printf("a = %d, b = %d\n",a,b);  // a = 10, b = 20
//	return 0;
//}

//�Ľ�
//void swap2(int* x, int* y)//ֱ������ָ���ҵ�a,b�ĵ�ַ����a,b��ַ�е����ݸı�    
////���ﲢ���Ǹı��ʵ�Σ�ʵ��ֻ�ǵ�ַ��Ӧ��16������������x,y��&a,&b�ĵ�ַ������ͬ��ֻ������ŵ���������ͬ�ģ�����a,b�ĵ�ַ����ͨ�������øı��ַ�е����ݴӶ�ʵ�ֵĽ����������α���������
////x,y����ʽ����  �����������û�е���swap2, x,y������û�б�����ռ�  �����βε������������֮����Զ������ˣ������β�ֻ�ں�������Ч
////��ʵ�δ����βε�ʱ��
////�β�ʵ������ʵ�ε�һ����ʱ����
////���βε��޸��ǲ���ı�ʵ�ε�
//{
//	int temp = 0;
//	temp = *y;
//	*y = *x;
//	*x = temp;
//}
//int main()
//{
//	int a = 10;//����һ���ĸ��ֽڵĿռ䴢�����a
//	//int* pa = &a;//paΪָ�����
//	int b = 20;
//	//int* pb = &b;
//	//����swap2����  ��ַ����
//	swap2(&a, &b);//&a,&b��ʵ�ʲ���     ʵ�ο����Ǳ��������������ʽ�������ȣ����Ǳ���Ҫ��ȷ����ֵ
//	printf("a = %d, b = %d\n",a,b);
//	return 0;
//}

//1.дһ�����������ж�һ�����ǲ�������
//#include<math.h>
////����������1  ������������0
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//			return 0;
//	}
//		return 1;
//}
//int main()
//{
//	//��ӡ100-200֮�������
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ",i);
//		}
//	}
//	if (201 == i)
//	{
//		printf("\n");
//	}
//	return 0;
//}

//2.дһ�������ж�һ���ǲ�������
//�����귵��1���������귵��0
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)//��ӡ1000-2000�������
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d��������\n", year);
//		}
//	}
//	return 0;
//}

//3.дһ��������ʵ��һ��������������Ķ��ֲ���
//�ҵ��˷��������±꣬�Ҳ�������-1
//                   x��������һ��ָ�� ����mid������� sizeof(x) = 4 ����Ҫ�ഫһ������sz
//int binary_search(int x[], int y, int sz)//����ʱF11���뺯��  F10������������
//{
//	int right = sz - 1;
//	int left = 0;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (y > x[mid])
//		{
//			left = mid + 1;
//		}
//		else if (y < x[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);//arrʵ����ֻ����ȥ������Ԫ�صĵ�ַ
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n",ret);
//	}
//	return 0;
//} 

//4.дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//void Add(int* x)
//{
//	//*x++;  ����   ��Ϊ++�����ü���� *x++  ��x++�ٽ�����
//	(*x)++;  //��ȷд��
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n",num);
//	return 0;
//}

//������Ƕ�׵��ú���ʽ����
//Ƕ�׵���   �����ͺ���֮������л��Ľ��
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
//��ʽ����    ��һ�������ķ���ֵ��Ϊ����һ�������Ĳ���
//#include<string.h>
//int main()
//{
//	int len = 0;
//	// 1.
//	len = strlen("abc");
//	printf("len = %d\n",len);
//	// 2.
//	printf("len = %d\n",strlen("abc"));
//	return 0;
//}
//int main()
//{
//	printf("%d\n",printf("%d",printf("%d",43)));
//	//printf�����ķ���ֵ�Ǵ�ӡ���ַ��ĸ���  ���Ϊ4321
//	return 0;
//}

//�����������Ͷ���
//��������   һ�����.h�ļ���   ��������һ����ں�����ʹ��֮ǰ��Ҫ������������ʹ��   ������ֻ�Ǹ��߱�������һ��������ʲô��������ʲô�����������Ƿ�����޹ؽ�Ҫ
//int Add(int ,int );
#include"add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a,b);
	printf("sum = %d\n",sum);
	return 0;
}
//�����Ķ���  һ�����.c�ļ���  
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}