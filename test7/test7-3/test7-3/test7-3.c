#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
// getchar �� putchar
int main()
{
	//int ch = getchar();
	//putchar(ch);
	//printf("%c\n", ch);
	int ch = 0;
	//ctrl + z
	//EOF - end of file -> -1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
//int main()
//{
//	//while�﷨�ṹ
//	//while(���ʽ)  //���жϱ��ʽ�Ƿ�Ϊ�棬Ϊ����ִ�У�ֱ�����ʽΪ��ֹͣѭ��
//	// ѭ�����:
//	//��Ļ�ϴ�ӡ1-10
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		if (i == 5)
//			continue;//��������ѭ��������һѭ���ж�  ����ӡ5��
//		printf("%d ", i);
//	}
//	//int i = 1;
//	//while (i <= 10)
//	//{
//	//	if (i == 5)
//	//		break;//����ѭ��
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	return 0;
//}

