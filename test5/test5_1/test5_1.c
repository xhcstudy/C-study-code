#include<stdio.h>
#include<string.h>
	//�ṹ��
	//���Ӷ��� - �ṹ�� - ���Ǵ��������һ������
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};
int main()
{
	//���ýṹ�����ʹ�����һ�������ͽṹ�����
	struct Book b1 = {"C���Գ������",55};
	strcpy(b1.name,"C++"); //strcpy - string copy - �ַ����������� - string.h
	printf("%s\n",b1.name);
	//struct Book* pb = &b1;
	//����pb��ӡ�����ͼ۸�
	// .   �ṹ�����  .��Ա
	// ->  �ṹ��ָ��  ->��Ա
	//printf("%s\n",(*pb).name);
	//printf("%d\n",pb->price);
	/*
	printf("����:%s\n",b1.name);
	printf("�۸�:%dԪ\n",b1.price);
	b1.price = 100;
	printf("�޸ĺ�ļ۸�Ϊ:%dԪ\n",b1.price);
	*/
	return 0;
}
	/*double b = 3.14;
	double* pd = &b;
	*pd = 5.5;
	printf("%d\n",sizeof(pd));
	return 0;
	*/
	//printf("%lf\n",b);
	//printf("%lf\n",*pd);

	/*int a = 10;
	//printf("%p\n",&a);
	int* p = &a;
	//printf("%p\n",p);
	*p = 20;
	printf("a = %d\n",a);
	*/
