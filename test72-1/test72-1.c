#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ļ��Ĵ򿪺͹ر�
//�ļ��ڶ�д֮ǰӦ���ȴ��ļ�����ʹ�ý���֮��Ӧ�ùر��ļ���
//�ڱ�д�����ʱ���ڴ��ļ���ͬʱ�����᷵��һ��FILE*��ָ�����ָ����ļ���Ҳ�൱�ڽ�����ָ����ļ��Ĺ�ϵ��
//ANSIC�涨ʹ��fopen���������ļ���fclose���ر��ļ���
//FILE * fopen(const char * filename, const char * mode);
//int fclose(FILE * stream);

//�򿪷�ʽ����:	
//�ļ�ʹ�÷�ʽ							����									���ָ���ļ�������
//"r"  (ֻ��)				Ϊ���������ݣ���һ���Ѿ����ڵ��ı��ļ�			����
//"w�� (ֻд)				Ϊ��������ݣ���һ���ı��ļ�						���������µ��ļ�
//"a" ��׷��)				���ı��ļ�β�������								����
//"rb" (ֻ��)				Ϊ���������ݣ���һ���������ļ�					����
//"wb" (ֻд)				Ϊ��������ݣ���һ���������ļ�					����һ���µ��ļ�
//"ab" (׷��)				��һ���������ļ�β�������							����
//"r+"����д)				Ϊ�˶���д����һ���ı��ļ�						����
//"w+" (��д)				Ϊ�˶���д������һ���µ��ļ�						����һ���µ��ļ�
//"a+" (��д)				��һ���ļ�, ���ļ�β���ж�д						����һ���µ��ļ�
//"rb+"(��д)				Ϊ�˶���д��һ���������ļ�						����
//"wb+"(��д)				Ϊ�˶���д���½�һ���µĶ������ļ�					���������µ��ļ�
//"ab+"(��д)				��һ���������ļ������ļ�β���ж���д				���������µ��ļ�

#include <string.h>
#include <errno.h>
//int main()
//{
//	//���ļ�
//	//���·��
//	//.. ��ʾ��һ��·��
//	//.  ��ʾ��ǰ·��
//	//fopen("../../test.txt", "r");
//	//fopen("test.txt", "r");
//
//	//����·����д��
//	//fopen("D:\\study_for_work\\c-study-code\\test72\\test72-1\\test72-1\\test.txt", "r");
//	FILE* pf = fopen("../test.txt", "w");//д��ʱ��Ὣԭ���ɵ��ļ����ٵ����½�һ���µ��ļ�
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//�򿪳ɹ�
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�ļ���˳���д
//����					������				������
//�ַ����뺯��			fgetc				����������
//�ַ��������			fputc				���������
//�ı����뺯��			fgetc				����������
//�ı��������			fputc				���������
//��ʽ�����뺯��		fscanf				����������
//��ʽ���������        fprint				���������
//����������            fread				�ļ�
//���������			fwrite				�ļ�


//int fputc(int c, FILE* stream);

//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//
//	//�ر��ļ�
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}


//int fgetc(FILE* stream);

int main()
{
	FILE* pfRead = fopen("test.txt", "r");
	if (pfRead == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//���ļ�
	printf("%c", fgetc(pfRead));//b
	printf("%c", fgetc(pfRead));//i
	printf("%c", fgetc(pfRead));//t
	//�ر��ļ�
	fclose(pfRead);
	pfRead = NULL;
	return 0;
}

//
//�Ӽ�������
//�������Ļ
//����&��Ļ�����ⲿ�豸
//
//���� - ��׼�����豸 - stdin
//��Ļ - ��׼����豸 - stdout
//��һ������Ĭ�ϴ򿪵��������豸
//stdin FILE*
//stdout FILE*
//stderr FILE*

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}