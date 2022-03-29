#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//模拟实现strncat
//char* my_strncat(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0')//找dest'\0'
//	{
//		dest++;
//	}
//	while (count--)
//	{
//		if (!(*dest++ = *src++))
//		{
//			return ret;//遇到'\0'停止追加 
//		}
//	}
//	*dest = '\0';//追加count个字节字符后补'\0'
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxxxxxxxxxxx";
//	char arr2[] = "world";
//	my_strncat(arr1, arr2, 8);
//	printf("%s\n",arr1);
//}


//strncmp
//int strncmp(const char * str1，const char * str2, size_t num);
//int main()
//{
//	const char* p1 = "abczef";
//	const char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n",ret);
//	return 0;
//}


//strstr - 查找字符串
//char *strstr(const char *string, const char * strCharSet);
//KMP 算法
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	char* s1;
	char* s2;
	char* cur = (char*)p1;//cur用来记录比较的起始位置
	if (!*p2)//如果要查找的子串是空字符串 返回p1
	{
		return ((char*)p1);
	}
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;//找到子串
		}
		cur++;
	}
	return NULL; //找不到的情况
}
int main()
{
	char* p1 = "ddabbbcdef";
	char* p2 = "abb";
	char* ret = my_strstr(p1, p2);//返回p1字符串中p2第一次出现的起始位置
	if (ret == NULL)
	{
		printf("子串不存在\n");
	}
	else
	{
		printf("%s\n",ret);
	}
	return 0;
}
