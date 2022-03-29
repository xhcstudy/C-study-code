#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//strtok
//char * strtok(char* str, const char* sep);
//sep参数是个字符串，定义了用作分隔符的字符集合
//第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
//strtok函数找到str中的下一个标记，并将其用\O结尾，返回一个指向这个标记的指针。
//(注:strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。)
//strtok函数的第一个参数不为NULL，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置
//strtok函数的第一个参数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
//如果字符串中不存在更多的标记，则返回NULL指针。


//int main()
//{
//	//192.168.31.121       .
//	//192 168 31 121 - strtok
//	//2380611601@qq.com    @  .
//	//2380611601 qq com - strtok
//	//char arr[] = "2380611601@qq.com";
//	//char* p = "@.";
//
//	//点分十进制的表示方式
//	char arr[] = "192.168.31.121";
//	char* p = ".";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//切割buf中的字符
//
//	char* ret = NULL;
//	for (ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	//char* ret = strtok(buf, p);
//	//printf("%s\n",ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	return 0;
//}


//strerror
//char * strerror (int errnum);
//返回错误码, 所对应的错误信息。
///*strerror example : error list */
//#incTude <stdio.h>
//#inc1ude <string.h>
//#include <errno.h>//必须包含的头文件


#include <errno.h>
//int main()
//{
//	//错误码  错误信息
//	//0 -     NO error
//	//1 -     Operation not permitted
//	//2 -     No such file or directory
//	//...
//	//errno 是一个全局的错误码变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码赋值到errno中
//
//	//char* str = strerror(errno);
//	//printf("%s\n",str);
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}


//函数	     如果它的参数符合下列条件就返回真
//iscntrl	 任何控制字符
//isspace	 空白字符：空格‘ ’，换页‘\f’，换行'\n'，回车'\r'，制表符'\t'，或垂直制表符'\v'
//isdigit	 十进制数字0~9
//isxdigit	 十六进制数字，包括所有十进制数字，小写字母a~f, 大写字母A~F
//islower	 小写字母a~z
//isupper	 大写字母A~Z
//isalpha	 字母a~z或A~Z
//isalnum	 字母或数字a~z，A~Z或0~9
//ispunct	 标点符号，任何不属于数字或字母的图像字符（可打印符号）
//isgraph	 任何图像字符
//isprint	 任何可打印字符，包括图像字符和空白字符

#include <ctype.h>
//int main()
//{
//	char ch = '2';
//	//int ret = islower(ch);
//	int ret = isdigit(ch);
//	printf("%d\n",ret);
//	return 0;
//}


//字符转换:
//int tolower(int c); 
//int toupper(int c);
int main()
{
	//char ch;
	//ch = getchar();
	////ch = tolower(ch);
	//ch = toupper(ch);
	//putchar(ch);

	char arr[] = "I AM A Student";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n",arr);
	return 0;
}

