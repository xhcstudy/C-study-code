#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//strtok
//char * strtok(char* str, const char* sep);
//sep�����Ǹ��ַ����������������ָ������ַ�����
//��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
//strtok�����ҵ�str�е���һ����ǣ���������\O��β������һ��ָ�������ǵ�ָ�롣
//(ע:strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ�)
//strtok�����ĵ�һ��������ΪNULL���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ��
//strtok�����ĵ�һ������ΪNULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
//����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ�롣


//int main()
//{
//	//192.168.31.121       .
//	//192 168 31 121 - strtok
//	//2380611601@qq.com    @  .
//	//2380611601 qq com - strtok
//	//char arr[] = "2380611601@qq.com";
//	//char* p = "@.";
//
//	//���ʮ���Ƶı�ʾ��ʽ
//	char arr[] = "192.168.31.121";
//	char* p = ".";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//�и�buf�е��ַ�
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
//���ش�����, ����Ӧ�Ĵ�����Ϣ��
///*strerror example : error list */
//#incTude <stdio.h>
//#inc1ude <string.h>
//#include <errno.h>//���������ͷ�ļ�


#include <errno.h>
//int main()
//{
//	//������  ������Ϣ
//	//0 -     NO error
//	//1 -     Operation not permitted
//	//2 -     No such file or directory
//	//...
//	//errno ��һ��ȫ�ֵĴ��������
//	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
//
//	//char* str = strerror(errno);
//	//printf("%s\n",str);
//
//	//���ļ�
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


//����	     ������Ĳ����������������ͷ�����
//iscntrl	 �κο����ַ�
//isspace	 �հ��ַ����ո� ������ҳ��\f��������'\n'���س�'\r'���Ʊ��'\t'����ֱ�Ʊ��'\v'
//isdigit	 ʮ��������0~9
//isxdigit	 ʮ���������֣���������ʮ�������֣�Сд��ĸa~f, ��д��ĸA~F
//islower	 Сд��ĸa~z
//isupper	 ��д��ĸA~Z
//isalpha	 ��ĸa~z��A~Z
//isalnum	 ��ĸ������a~z��A~Z��0~9
//ispunct	 �����ţ��κβ��������ֻ���ĸ��ͼ���ַ����ɴ�ӡ���ţ�
//isgraph	 �κ�ͼ���ַ�
//isprint	 �κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�

#include <ctype.h>
//int main()
//{
//	char ch = '2';
//	//int ret = islower(ch);
//	int ret = isdigit(ch);
//	printf("%d\n",ret);
//	return 0;
//}


//�ַ�ת��:
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

