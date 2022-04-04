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
//	//读文件
//	fgets(buf, 1024, pf);//读取一行
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
//	//写文件
//	fputs("hello\n", pf);//写一行
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	//从键盘上读取一行
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//从标准输入读取
//	//fputs(buf, stdout);//输出到标准输出流
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


//使用fprintf格式化的输出数据 fprintf的使用方法和printf相似 只是多了一个文件指针
//int main()
//{
//	struct S s = { 100, 3.14f, "yangruoli" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//格式化的输出数据
//	fprintf(pf, "%d %f %s", s.n, s.score, s.name);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//使用fscanf格式化的标准输入数据 fscanf的使用方法和scanf相似 只是多了一个文件指针
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//格式化的输入数据
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.name));  //将文件中的数据输入到程序对应的参数中
//	printf("%d %f %s", s.n, s.score, s.name);//检验是否完成输入
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//对比一组函数:
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
	//将格式化数据转化为字符串存储到buf中
	sprintf(buf, "%d %f %s", s.n, s.score, s.name);
	//printf("%s\n", buf);//检验是否存储成功
	//将buf中的数据格式化输入到temp中
	sscanf(buf, "%d %f %s", &(temp.n), &(temp.score), &(temp.name));
	printf("%d %f %s", temp.n, temp.score, temp.name);//检验
	return 0;
}