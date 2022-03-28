#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//strcmp
//int strcmp ( const char * str1,const char * str2 );
//This function starts comparing the first character of each string.
//If they are equal to each other, it continues with the following pairs until the characters differ or until a terminating null - character is reached.
//标准规定: 
//第一个字符串大于第二个字符串，则返回大于0的数字
//第一个字符串等于第二个字符串，则返回0
//第一个字符串小于第二个字符串，则返回小于0的数字
//那么如何判断两个字符串?


//int main()
//{
//	//vs的返回值  每个编译器的返回值不一定相同  判断时不要用1 和 -1  
//	// >  1 
//	// == 0
//	// <  -1
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = strcmp(p1, p2);//比较字符的ASCII码值 一个个比较 a < s 所以第一个字符串小于第二个字符串
//	printf("%d\n",ret);
//	return 0;
//}


//实现
#include <assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//int main()
//{
//	char* p1 = "abqde";
//	char* p2 = "abcdef";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n",ret);
//	return 0;
//}


//strncpy
//char* strncpy(char* strDest, const char* strSource, size_t count );   count 的单位是字节
//Copies the first num characters of source to destination.
//If the end of the source C string(which issignaled by a null - character) is found before num characters have been copied, 
//destination is paddedwith zeros until a total of num characters have been written to it.
//拷贝num个字符从源字符串到目标空间。
//如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个.


//模拟实现strncpy
//1.
//char* my_strncpy(char* dest, const char* src, size_t n)
//{
//	assert(dest && src);
//	char* ret = dest;
//	size_t i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (*src == '\0')
//		{
//			*dest++ = '\0';
//		}
//		else
//		{
//			*dest++ = *src++;
//		}
//	}
//	return ret;
//}
//2.编译器的精简版本  学习
//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (count && (*dest++ = *src++))
//		count--;
//	if (count)
//		while (--count)
//			*dest++ = '\0';
//	return ret;
//}
//int main()
//{
//	//char arr1[10] = "abcdefg";
//	//char arr2[] = "hello bit";
//	//strncpy(arr1, arr2, 4);
//	char arr1[10] = "abcdefg";
//	char arr2[] = "bit";
//	my_strncpy(arr1, arr2, 6);//当要拷贝的字节数比源字符串的字节数多时  不够的补'\0'
//	return 0;
//}


//strncat
//char * strncat(char * destination, const char * source，size_t num);
//Appends the first num characters of source to destination, plus a terminating null - character
//lf the length of the C string in source is less than num, only the content up to the terminating null - character is copied
int main()
{
	//char arr1[30] = "hello\0xxxxxxxxxxxxxxx";
	//char arr2[] = "world";
	//strncat(arr1, arr2, 3);
	char arr1[30] = "hello\0xxxxxxxxxxxxxxx";
	char arr2[] = "world";
	strncat(arr1, arr2, 8);//若count 大于源字符串字节个数 ，并不会多追加'\0'，但是不论追加几个字节，最后都会补上'\0'
	printf("%s\n",arr1);
	return 0;
}
