#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ַ��� + �ڴ溯���Ľ���
//���ַ�������
//strlen
//���Ȳ������Ƶ��ַ�������
//strcpy
//strcat
//strcmp
//���������Ƶ��ַ�����������
//strncpy
//strncat
//strncmp
//�ַ�������
//strstro 
//strtok
//������Ϣ����
//strerror
//�ַ�����
//�ڴ��������
//memcpy
//memmove
//memset
//memcmp


//strlen
//size_t strlen(const char * str);
//�ַ�����'\O'��Ϊ������־��strlen�������ص������ַ�����'\0��ǰ����ֵ��ַ�����(������'\0')��
//����ָ����ַ�������Ҫ��'\0��������
//ע�⺯���ķ���ֵΪsize_t�����޷��ŵ�(�״�)
//ѧ��strlen������ģ��ʵ��
#include <string.h>
#include <assert.h>
//1.������
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	size_t count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}

//2.�ݹ�
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//3.ָ�� - ָ��
//
//int main()
//{
//	//int len = my_strlen("abcdef");
//	////����ʾ��
//	////char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' }; 
//	////int len = strlen(arr);
//	//printf("%d\n",len);
//	//�����޷�����   �״�
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//}


//strcpy.
//char* strcpy(char * destinaion, const char * source);
//Copies the C string pointed by source into the array pointed by destination, including the terminating null character(and stopping at that point).
//Դ�ַ����������'\0'��
//�ὫԴ�ַ����е�'\0'������Ŀ��ռ䡣
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ�����
//Ŀ��ռ����ɱ䡣
//ѧ��ģ��ʵ�֡�
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//����ʾ��  Դ�ַ����������'\0',���򿽱���֪��ʲôʱ��ֹͣ���п������Խ�����
//	//char arr2[] = { 'b', 'i', 't' };
//	//����ʾ��  Ŀ��ռ�����㹻�󣬷����Խ�����
//	//char arr1[] = "a";
//	//char arr2[] = "bit";
//	//����ʾ��  Ŀ��ռ����ɱ�
//	//char* arr1 = "abcdefghi"; �����ַ������ɸı�
//	//char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	return 0;
//}


//strcat - �ַ���׷��
//char* strcat(char * destination, const char * source );
//Appends a copy of the source string to the destination string.The terminating null character in
//destination is overwritten by the first character of source, and a null-character is included at
//the end of the new string formed by the concatenation of both in destination.
//Դ�ַ���������'\0��������
//Ŀ��ռ�������㹻�Ĵ���������Դ�ַ��������ݡ�
//Ŀ��ռ������޸ġ�
//�ַ����Լ����Լ�׷�ӣ����?
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	//1.�ҵ�Ŀ���ַ���'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.׷��
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	return 0;
}


