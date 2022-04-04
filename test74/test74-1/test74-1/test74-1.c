#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>

struct S
{
	char name[20];
	int age;
	double score;
};

//size_t fwrite(const void* buffer, size_t size, size_t count, FILE* stream);
//int main()
//{
//	struct S s = { "����", 20, 55.6 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (NULL == pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//��������ʽд�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//size_t fread(void* buffer, size_t size, size_t count, FILE* stream);
//int main()
//{
//	struct S temp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (NULL == pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//��������ʽ���ļ�
//	fread(&temp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf", temp.name, temp.age, temp.score);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�ļ��������д
//fseek - �����ļ�ָ���λ�ú�ƫ������λ�ļ�ָ��
//int fseek(FILE * stream��long offset, int origin);   ƫ������λ���ֽ�
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (NULL == pf)
	{
		return 0;
	}
	//1.��λ�ļ�ָ��
	fseek(pf, -2, SEEK_END);
	//2.��ȡ�ļ�
	int ch = fgetc(pf);
	printf("%c\n", ch);

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}