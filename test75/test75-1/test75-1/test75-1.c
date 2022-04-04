#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>


//ftell - �����ļ�ָ���������ʼλ�õ�ƫ����
//long int ftell(FILE* stream);
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		assert(pf);
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	//fseek(pf, -2, SEEK_END);
//	//fgetc(pf);
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//rewind - ���ļ�ָ���λ�ûص��ļ�����ʼλ��
//void rewind(FILE* stream);
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		assert(pf);
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	//fseek(pf, -2, SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�ļ������ж�
//�ļ������ж�������ʹ�õ�feof
//�μ� : ���ļ���ȡ�����У�������feof�����ķ���ֱֵ�������ж��ļ����Ƿ������
//����Ӧ���ڵ��ļ���ȡ������ʱ���ж��Ƕ�ȡʧ�ܽ��������������ļ�β����
//1.�ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�ΪEOF(fgetc)������NULL(fgets)
// ���� :
//fgetc�ж��Ƿ�ΪEOF.
//fgets�жϷ���ֵ�Ƿ�ΪNULL.
//2.�������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
//�����
//fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����

//int main()
//{
//	//EOF -  -1
//	//feof();//EOF - end of file -�ļ�������־
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//
//	int ch = fgetc(pf);
//	printf("%d\n",ch);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


int main()
{
	//strerror - �Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
	//printf("%s\n", strerror(errno));
	
	//perror
	FILE* pf = fopen("test.txt", "r");
	if (NULL == pf)
	{
		perror("open file test2.txt");
		return 0;
	}
	//���ļ�
	int c = 0;
	while ((c = fgetc(pf)) != EOF)
	{
		putchar(c);
	}

	//�ж��ļ�Ϊʲô����
	//�����������
	if (ferror(pf))
	{
		puts("error\n");
	}
	if (feof(pf))
	{
		puts("file end success");
	}

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}