#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ͳ��2����(����)��1�ĸ��� 
//����1
//int count_bit_one(unsigned int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (n & 1 == 1)
//		{
//			count++;
//		}
//		n = n >> 1;
//	}
//	return count;
//}
//int main()
//{
//	int a = 15;
//	int i = 0;
//	int count = count_bit_one(a);
//	printf("%d\n",count);
//	return 0;
//}

//����2  �����ţ�
//n = n & (n - 1)  ����һ�� �ܽ�n���ұߵ�1��Ϊ0
// n  = 13     1101
// n - 1       1100
// n * n - 1   1100
// n = 12      1100
// n - 1       1011
// n * n - 1   1000  ��������֮�� �� 1101 ��� 1000  
//void count_bit_one()
//{
//	int a = 0;
//	int i = 0;
//	int count = 0;
//	printf("������Ҫ�������");
//	scanf("%d",&a);
//	while (a != 0)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	printf("�����������ֵĶ�������1�ĸ���Ϊ:%d\n", count);
//}
//int main()
//{
//	count_bit_one();
//	return 0;
//}

//system("pause");//system�⺯�� - ִ��ϵͳ���� - pause(��ͣ)  ��Ҫ��#include <stdlib.h>
//��������в�ͬλ�ĸ���  
//˼·������������������Ȼ��ͳ���������Ӧ��������1�ĸ���
//int get_diff_bit(int m, int n)
//{
//	int x = m ^ n;
//	return count_bit_one(x);//����ʵ�ֵĺ���
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	printf("������Ҫ���������:");
//	scanf("%d%d",&a,&b);
//	count = get_diff_bit(a, b);
//	printf("�������������ж����Ʋ�ͬλ�ĸ���Ϊ:%d\n",count);
//	return 0;
//}

//��ӡ�����Ƶ�����λ��ż��λ  ��ȡһ����������������������ż��λ������λ���ֱ��ӡ������������   ***λ���㲻��ı�ԭ������ֵ��Ҫ�ı�ԭ������ֵ��Ҫ������ֵ���ʽʵ�֡�
//void Print(int m)
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	printf("��������������λ�Ķ�����Ϊ:");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d",(m >> i) & 1);
//	}
//	printf("\n");
//	printf("����������ż��λ�Ķ�����Ϊ:");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	printf("��������Ҫ�������:");
//	scanf("%d",&m);
//	Print(m);
//	return 0;
//}

//const����ָ�������Ч����C����const����ָ�����
//1) const int* p = &a��
//ͬ�� const �� int ���Ի���λ�ã������ǵȼ۵ġ������Է�����ǰ��ʱ����������
//���� const ����ǰ���ʱ�������εľ��� *p����ô *p �Ͳ��ɱ�,�����ݲ��ɱ䡣
//2) int* const p=&a��
//��ʱ const ���ε��� p������ p �д�ŵ��ڴ浥Ԫ�ĵ�ַ���ɱ䣬���ڴ浥Ԫ�е����ݿɱ䡣
//3) const int* const p = &a��
//��ʱ *p �� p ���������ˣ���ô p �д�ŵ��ڴ浥Ԫ�ĵ�ַ���ڴ浥Ԫ�е����ݶ����ɱ䡣

//ʵ��һ������,��ӡ�˷��ھ����ھ���������������Լ�ָ��  
//��:����9�����9*9�ھ�������12�����12*12�ĳ˷��ھ���
//void print_table(int m)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= m; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d = %-4d",i,j,i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int m = 0;
//	printf("��������Ҫ����Ŀھ��������:");
//	scanf("%d",&m);
//	print_table(m);
//	return 0;
//}

//�õݹ�ķ�ʽʵ�ִ�ӡһ��������ÿһλ
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	print(a);
//	return 0;
//}

//�ǵݹ���n�Ľ׳�
//int get_factorial(int n)
//{
//	int i = 0;
//	int fac = 1;
//	for (i = n; i >= 1; i--)
//	{
//		fac = i * fac;
//	}
//	return fac;
//}
//int main()
//{
//	int n = 0;
//	int fac = 0;
//	scanf("%d",&n);
//	fac = get_factorial(n);
//	printf("fac = %d\n",fac);
//	return 0;
//}

//�ݹ���n�Ľ׳�
//int get_factorial(int n)
//{
//	if (n >1)
//	{
//		return n * get_factorial(n - 1);
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	int fac = 0;
//	scanf("%d",&n);
//	fac = get_factorial(n);
//	printf("fac = %d\n", fac);
//	return 0;
//}

//��дһ������reverse_string(char* string) (�ݹ�ʵ��)    �������ַ����е��ַ��������С�  Ҫ��:����ʹ��C�⺯���е��ַ�����������
//�޵ݹ�ʵ��
//int  my_strlen(char str[])
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//void reverse_string(char arr[])
//{
//	int left = 0;
//	int len = my_strlen(arr) - 1;
//	int right = len;
//	while (left < right)
//	{
//		char temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		right--;
//		left++;
//	}
//}

//int main()
//{
//	char arr[] = "bit";
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_string(arr);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c",arr[i]);
//	}
//	return 0;
//}

//�ݹ�ʵ��
//void reverse_string(char arr[])
//{
//	char temp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr+1);
//	}
//	arr[len - 1] = temp;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_string(arr);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c",arr[i]);
//	}
//	return 0;
//}

//дһ���ݹ麯��DigSum(n)������һ���Ǹ����������������������֮��
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	return n % 10;
//}
//int main()
//{
//	unsigned int n = 0;
//	int m = 0;
//	scanf("%d",&n);
//	m = DigitSum(n);
//	printf("%d\n",m);
//	return 0;
//}

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
double get_power(int x, int y)
{
	if (y > 0)
	{
		return x * get_power(x, y - 1);
	}
	else if (y == 0)
	{
		return 1;
	}
	else
	{
		return 1.0 / get_power(x, -y);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d",&n,&k);
	double ret = get_power(n, k);
	printf("ret = %lf\n",ret);
	return 0;
}
