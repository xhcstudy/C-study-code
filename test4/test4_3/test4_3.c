#include<stdio.h>
int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'b';
	printf("ch = %c\n",ch);
	printf("%d\n",sizeof(pc));
	return 0;
/*	int a = 10;//�ĸ��ֽ�
	int* p = &a;//ȡ��a�ĵ�ַ
	//��һ�ֱ��������洢��ַ - ָ�����
	//printf("%p\n",&a);//��ӡ����Ϊ16����
	//printf("%p\n",p);
	*p = 20;// *�����ò�����
	printf("a = %d\n",a);
	return 0;
*/
}