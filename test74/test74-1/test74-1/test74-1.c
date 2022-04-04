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
//	struct S s = { "张三", 20, 55.6 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (NULL == pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//二进制形式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//关闭文件
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
//	//二进制形式读文件
//	fread(&temp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf", temp.name, temp.age, temp.score);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//文件的随机读写
//fseek - 根据文件指针的位置和偏移来定位文件指针
//int fseek(FILE * stream，long offset, int origin);   偏移量单位是字节
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (NULL == pf)
	{
		return 0;
	}
	//1.定位文件指针
	fseek(pf, -2, SEEK_END);
	//2.读取文件
	int ch = fgetc(pf);
	printf("%c\n", ch);

	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}