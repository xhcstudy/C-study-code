#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	char arr[] = "yangruolisb";
//	int i = 0;
//	int sz = sizeof(arr);
//	//FILE* pfWrite = fopen("test.txt", "w");
//	//if (pfWrite == NULL)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//	return 0;
//	//}
//	//for (i = 0; i < sz; i++)
//	//{
//	//	fputc(arr[i], pfWrite);
//	//}
//	//fclose(pfWrite);
//	//pfWrite = NULL;
//	
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", fgetc(pfRead));
//	}
//	fclose(pfRead);
//	pfRead = NULL;
//}


//char* fgets(char* string, int n, FILE* stream)

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);//��ȡһ��
//	//printf("%s", buf);
//	puts(buf);
//
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int fputs(const char* string, FILE* stream);
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputs("hello\n", pf);//дһ��
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	//�Ӽ����϶�ȡһ��
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//�ӱ�׼�����ȡ
//	//fputs(buf, stdout);//�������׼�����
//
//	gets(buf);
//	puts(buf);
//	return 0;
//}


//struct S
//{
//	int n;
//	float score;
//	char name[20];
//};


//ʹ��fprintf��ʽ����������� fprintf��ʹ�÷�����printf���� ֻ�Ƕ���һ���ļ�ָ��
//int main()
//{
//	struct S s = { 100, 3.14f, "yangruoli" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//��ʽ�����������
//	fprintf(pf, "%d %f %s", s.n, s.score, s.name);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//ʹ��fscanf��ʽ���ı�׼�������� fscanf��ʹ�÷�����scanf���� ֻ�Ƕ���һ���ļ�ָ��
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//��ʽ������������
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.name));  //���ļ��е��������뵽�����Ӧ�Ĳ�����
//	printf("%d %f %s", s.n, s.score, s.name);//�����Ƿ��������
//	
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�Ա�һ�麯��:
// scanf / fscanf / sscanf
// printf / fprintf/ sprintf

struct S
{
	int n;
	float score;
	char name[20];
};

int main()
{
	struct S s = { 100, 3.14f, "yangruoli" };
	char buf[1024] = { 0 };
	struct S temp = { 0 };
	//����ʽ������ת��Ϊ�ַ����洢��buf��
	sprintf(buf, "%d %f %s", s.n, s.score, s.name);
	//printf("%s\n", buf);//�����Ƿ�洢�ɹ�
	//��buf�е����ݸ�ʽ�����뵽temp��
	sscanf(buf, "%d %f %s", &(temp.n), &(temp.score), &(temp.name));
	printf("%d %f %s", temp.n, temp.score, temp.name);//����
	return 0;
}