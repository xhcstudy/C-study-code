#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//����1
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������:->");
//	scanf("%s", password);//�������룬�������password������
//	//��������ʣ��һ��'\n'
//	//��ȡ��'\n'
//	while ((ch = getchar() != '\n'))
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else 
//		printf("δȷ�ϳɹ�\n");		
//	return 0;
//}
//����2
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')//ֻ��ӡ�ַ�0 - �ַ�9 �����ַ���continue���������
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
// forѭ��
// for(���ʽ1;���ʽ2;���ʽ3)
//    ѭ����䣺    ���ʽ1Ϊ��ʼ�����֣����ڳ�ʼ��ѭ������    ���ʽ2Ϊ�����жϲ��֣������ж�ѭ��ʱ��ֹ    ���ʽ3Ϊ�������֣�����ѭ���������ж�
//��forѭ������Ļ�ϴ�ӡ1 2 3 4 6 7 8 9 10
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (5 == i)
			continue;//��whileѭ����continue��ͬ forѭ��������continue�Ի�ִ�б��ʽ3
		printf("%d ", i);
		if (10 == i)
			printf("\n");
	}
	return 0;
}
