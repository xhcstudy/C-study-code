#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//文件的打开和关闭
//文件在读写之前应该先打开文件，在使用结束之后应该关闭文件。
//在编写程序的时候，在打开文件的同时，都会返回一个FILE*的指针变量指向该文件，也相当于建立了指针和文件的关系。
//ANSIC规定使用fopen函数来打开文件，fclose来关闭文件。
//FILE * fopen(const char * filename, const char * mode);
//int fclose(FILE * stream);

//打开方式如下:	
//文件使用方式							含义									如果指定文件不存在
//"r"  (只读)				为了输入数据，打开一个已经存在的文本文件			出错
//"w” (只写)				为了输出数据，打开一个文本文件						建立—个新的文件
//"a" （追加)				向文本文件尾添加数据								出错
//"rb" (只读)				为了输入数据，打开一个二进制文件					出错
//"wb" (只写)				为了输出数据，打开一个二进制文件					建立一个新的文件
//"ab" (追加)				向一个二进制文件尾添加数据							出错
//"r+"（读写)				为了读和写，打开一个文本文件						出错
//"w+" (读写)				为了读和写，建立一个新的文件						建立一个新的文件
//"a+" (读写)				打开一个文件, 在文件尾进行读写						建立一个新的文件
//"rb+"(读写)				为了读和写打开一个二进制文件						出错
//"wb+"(读写)				为了读和写，新建一个新的二进制文件					建立—个新的文件
//"ab+"(读写)				打开一个二进制文件，任文件尾进行读和写				建立—个新的文件

#include <string.h>
#include <errno.h>
//int main()
//{
//	//打开文件
//	//相对路径
//	//.. 表示上一级路径
//	//.  表示当前路径
//	//fopen("../../test.txt", "r");
//	//fopen("test.txt", "r");
//
//	//绝对路径的写法
//	//fopen("D:\\study_for_work\\c-study-code\\test72\\test72-1\\test72-1\\test.txt", "r");
//	FILE* pf = fopen("../test.txt", "w");//写的时候会将原来旧的文件销毁掉，新建一个新的文件
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//打开成功
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//文件的顺序读写
//功能					函数名				适用于
//字符输入函数			fgetc				所有输入流
//字符输出函数			fputc				所有输出流
//文本输入函数			fgetc				所有输入流
//文本输出函数			fputc				所有输出流
//格式化输入函数		fscanf				所有输入流
//格式化输出函数        fprint				所有输出流
//二进制输入            fread				文件
//二进制输出			fwrite				文件


//int fputc(int c, FILE* stream);

//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//
//	//关闭文件
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
	//读文件
	printf("%c", fgetc(pfRead));//b
	printf("%c", fgetc(pfRead));//i
	printf("%c", fgetc(pfRead));//t
	//关闭文件
	fclose(pfRead);
	pfRead = NULL;
	return 0;
}

//
//从键盘输入
//输出到屏幕
//键盘&屏幕都是外部设备
//
//键盘 - 标准输入设备 - stdin
//屏幕 - 标准输出设备 - stdout
//是一个程序默认打开的两个流设备
//stdin FILE*
//stdout FILE*
//stderr FILE*

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}