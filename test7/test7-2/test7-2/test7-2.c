#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
int main()
{
//switch���
//switch(���α��ʽ)
//	{
//		����
//	}
//case ���γ������ʽ
//	���;
	int day = 0;
	scanf("%d", &day);
	switch (day)//ֻ�ܴ������  case �� default û��˳��Ҫ�� ����default�������
	{
	case 1:
		printf("����1\n");
		break;
	case 2:
		printf("����2\n");
		break;
	case 3:
		printf("����3\n");
		break;//����switch���
	case 4:
		printf("����4\n");
		break;
	case 5:
		printf("����5\n");
		break;
	case 6:
		printf("����6\n");
		break;
	case 7:
		printf("������\n");
		break;
	default://���day = 8
		printf("�������\n");
	}

//�ж�һ�����Ƿ�Ϊ����
	//int num = 0;
	//printf("������һ������num:\n");
	//scanf("%d", &num);
	//if (num % 2 == 0)
	//	printf("num��������\n");
	//else
	//	printf("num������\n");

//���1-100֮�������
	//int i = 1;
	//int n = 0;
	//while (i <= 100)
	//{
	//	if (i % 2 != 0)
	//	{
	//		n++;//����++������������
	//		printf("��%d������Ϊ��%d\n",n, i);
	//	}
	//	i++;
	//}
	return 0;
}
