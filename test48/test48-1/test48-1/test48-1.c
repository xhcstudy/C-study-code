#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
//�ж��ǲ����Ӽ��ķ���
//int is_left_move(char* str1, char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	//�ų��ַ������������Ӽ������
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//1.��str1�ַ�����׷��һ��str1�ַ���
//	//strcat - �ַ���׷�� - ���������Լ�׷���Լ�
//	//strncat
//	//strcat(str1,str1);
//	strncat(str1,str1,len1);
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//strstr - ���Ӵ���
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (1 == ret)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[30] = "abc";
//	char arr2[] = "dcef";
//	strcat(arr1,arr2);
//	printf("%s\n",arr1);//abcdef
//	return 0;
//}

//��Ŀ����:���Ͼ�����Ŀ���� :
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ�� : ʱ�临�Ӷ�С��O(N);
int Find_Num(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int k = 0;
	int x = 3;
	int y = 3;
	scanf("%d",&k);
	//�����Ͳ��� x y
	int ret = Find_Num(arr, k, &x, &y);//��ַ��ȥ �ܸı�x��y  ����ҵ�ʱ���±�
	if (ret == 1)
	{
		printf("�ҵ���,�±���%d %d\n", x, y);
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}
