#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//ģ��ʵ��strncat
//char* my_strncat(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0')//��dest'\0'
//	{
//		dest++;
//	}
//	while (count--)
//	{
//		if (!(*dest++ = *src++))
//		{
//			return ret;//����'\0'ֹͣ׷�� 
//		}
//	}
//	*dest = '\0';//׷��count���ֽ��ַ���'\0'
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
//int strncmp(const char * str1��const char * str2, size_t num);
//int main()
//{
//	const char* p1 = "abczef";
//	const char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n",ret);
//	return 0;
//}


//strstr - �����ַ���
//char *strstr(const char *string, const char * strCharSet);
//KMP �㷨
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	char* s1;
	char* s2;
	char* cur = (char*)p1;//cur������¼�Ƚϵ���ʼλ��
	if (!*p2)//���Ҫ���ҵ��Ӵ��ǿ��ַ��� ����p1
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
			return cur;//�ҵ��Ӵ�
		}
		cur++;
	}
	return NULL; //�Ҳ��������
}
int main()
{
	char* p1 = "ddabbbcdef";
	char* p2 = "abb";
	char* ret = my_strstr(p1, p2);//����p1�ַ�����p2��һ�γ��ֵ���ʼλ��
	if (ret == NULL)
	{
		printf("�Ӵ�������\n");
	}
	else
	{
		printf("%s\n",ret);
	}
	return 0;
}
