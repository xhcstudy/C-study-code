#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//strcmp
//int strcmp ( const char * str1,const char * str2 );
//This function starts comparing the first character of each string.
//If they are equal to each other, it continues with the following pairs until the characters differ or until a terminating null - character is reached.
//��׼�涨: 
//��һ���ַ������ڵڶ����ַ������򷵻ش���0������
//��һ���ַ������ڵڶ����ַ������򷵻�0
//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
//��ô����ж������ַ���?


//int main()
//{
//	//vs�ķ���ֵ  ÿ���������ķ���ֵ��һ����ͬ  �ж�ʱ��Ҫ��1 �� -1  
//	// >  1 
//	// == 0
//	// <  -1
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = strcmp(p1, p2);//�Ƚ��ַ���ASCII��ֵ һ�����Ƚ� a < s ���Ե�һ���ַ���С�ڵڶ����ַ���
//	printf("%d\n",ret);
//	return 0;
//}


//ʵ��
#include <assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
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
//char* strncpy(char* strDest, const char* strSource, size_t count );   count �ĵ�λ���ֽ�
//Copies the first num characters of source to destination.
//If the end of the source C string(which issignaled by a null - character) is found before num characters have been copied, 
//destination is paddedwith zeros until a total of num characters have been written to it.
//����num���ַ���Դ�ַ�����Ŀ��ռ䡣
//���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��0��ֱ��num��.


//ģ��ʵ��strncpy
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
//2.�������ľ���汾  ѧϰ
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
//	my_strncpy(arr1, arr2, 6);//��Ҫ�������ֽ�����Դ�ַ������ֽ�����ʱ  �����Ĳ�'\0'
//	return 0;
//}


//strncat
//char * strncat(char * destination, const char * source��size_t num);
//Appends the first num characters of source to destination, plus a terminating null - character
//lf the length of the C string in source is less than num, only the content up to the terminating null - character is copied
int main()
{
	//char arr1[30] = "hello\0xxxxxxxxxxxxxxx";
	//char arr2[] = "world";
	//strncat(arr1, arr2, 3);
	char arr1[30] = "hello\0xxxxxxxxxxxxxxx";
	char arr2[] = "world";
	strncat(arr1, arr2, 8);//��count ����Դ�ַ����ֽڸ��� ���������׷��'\0'�����ǲ���׷�Ӽ����ֽڣ���󶼻Ჹ��'\0'
	printf("%s\n",arr1);
	return 0;
}
