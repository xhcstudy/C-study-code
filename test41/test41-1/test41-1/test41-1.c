#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ά����
//��ά���� ��Ԫ���� ��һ�е�һά����
//a[0]���Կ��ɵ�һ�������������
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));				//48
//	printf("%d\n", sizeof(a[0][0]));		//4
//	printf("%d\n", sizeof(a[0]));			//16   a[0]�������Ϊ��һ�е�������  sizeof(������) ��ʱ������������������ �����һ��a[0]�����С   
//	printf("%d\n", sizeof(a[0] + 1));		//4/8  ��ʱ���ǵ�������sizeof�ڲ�  ��ʱ������Ԫ�ص�ַ a[0]�ǵ�һ�е�һ��Ԫ�ص�ַ a[0] + 1 ���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));	//4    a[0] + 1 �ٽ����� ���ǵ�һ�еڶ���Ԫ��  Ϊint�� �ĸ��ֽ�
//	printf("%d\n", sizeof(a + 1));			//4/8  a + 1����ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));		//16   a + 1����ڶ��еĵ�ַ �ٽ����þ��ǵڶ��е�Ԫ�� �ܴ�С16���ֽ�
//	printf("%d\n", sizeof(&a[0] + 1));		//4/8  &a[0] + 1 ����ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));	//16
//	printf("%d\n", sizeof(*a));				//16
//	printf("%d\n", sizeof(a[3]));			//16
//	return 0;
//}	

//ָ�������
//1.
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1); 
//	printf("%d,%d", *(a + 1), *(ptr - 1));// 2,5  
//	//ptr ָ�������������a����һ����ַ  int* �����˲���  ptr - 1ָ�����a[5]
//	return 0;
//}

//2.
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//����p ��ֵΪ0x100000�����±��ʽ��ֵ�ֱ�Ϊ����
//��֪���ṹ��Test���͵ı�����СΪ20���ֽ�
//ָ�� +- ����ȡ����ָ������
int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1); //p + 20���ֽ�   0x00100014
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);
}
