#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>


//ftell - 返回文件指针相对于起始位置的偏移量
//long int ftell(FILE* stream);
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		assert(pf);
//		return 0;
//	}
//	//1.定位文件指针
//	//fseek(pf, -2, SEEK_END);
//	//fgetc(pf);
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//rewind - 让文件指针的位置回到文件的起始位置
//void rewind(FILE* stream);
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		assert(pf);
//		return 0;
//	}
//	//1.定位文件指针
//	//fseek(pf, -2, SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//文件结束判定
//文件结束判定被错误使用的feof
//牢记 : 在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束。
//而是应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束
//1.文本文件读取是否结束，判断返回值是否为EOF(fgetc)，或者NULL(fgets)
// 例如 :
//fgetc判断是否为EOF.
//fgets判断返回值是否为NULL.
//2.二进制文件的读取结束判断，判断返回值是否小于实际要读的个数。
//例如∶
//fread判断返回值是否小于实际要读的个数。

//int main()
//{
//	//EOF -  -1
//	//feof();//EOF - end of file -文件结束标志
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
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


int main()
{
	//strerror - 把错误码对应的错误信息的字符串地址返回
	//printf("%s\n", strerror(errno));
	
	//perror
	FILE* pf = fopen("test.txt", "r");
	if (NULL == pf)
	{
		perror("open file test2.txt");
		return 0;
	}
	//读文件
	int c = 0;
	while ((c = fgetc(pf)) != EOF)
	{
		putchar(c);
	}

	//判断文件为什么结束
	//遇到错误结束
	if (ferror(pf))
	{
		puts("error\n");
	}
	if (feof(pf))
	{
		puts("file end success");
	}

	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}