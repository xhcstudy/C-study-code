#include<stdio.h>
int main()
{
	extern int Add(int,int);//�����ⲿ����
	int a = 10;
	int b = 20;
	int sum = Add(a,b);
	printf("sum = %d\n",sum);
	return 0;
}
/*int main()
{
	//static ���ξֲ����� ���ӳ�ʹ������
	//static ����ȫ�ֱ��� �ܸı�ȫ�ֱ����������� �þ�̬��ȫ�ֱ���ֻ�����Լ���Դ�ļ��ڲ�ʹ��
	//static ���κ���     �ܸı亯���������� ��׼ȷ��˵�� 
	//static ���κ���     �ܸı亯������������
	//�����ĺ��������ⲿ�������ԣ��ⲿ�ļ�����֮����ʹ�ã� ��static���κ���֮���ⲿ��������->�ڲ���������
	extern int g_val;
	printf("g_val = %d\n",g_val);
	return 0;
}*/
/*void test()
{
	static int a = 1;
	a++;
	printf("a = %d\n",a);
}
int main()
{
	int i = 0;
	while(i < 5)
	{
		test();
		i++;
	}
	return 0;
}*/