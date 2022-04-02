#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


//2.����ջ�ռ��ַ������
//char* GetMemory(void)
//{
//	//����static p���������ڱ䳤 ��̬��
//	static char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str); //�����������֮��p���ͷ� str�Ƿ������ڴ�   ��ӡ���ֵ
//}
//int main()
//{
//	Test();
//	return 0;
//}

//3.
//����:û���ͷŶ�̬���ٵ��ڴ�
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//free(str);
//	//str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//�޸�
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	if (str == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		strcpy(str, "hello");
//		printf(str);
//	}
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//4.
//����:free֮��û�н�str��ΪNULL��֮���ٶ�strָ��ĵ�ַ���в������Ƿ������ڴ�
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//�޸�
void Test(void)
{
	char* str = (char*)malloc(100);
	if (str == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		strcpy(str, "hello");
	}
	free(str);
	str = NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}