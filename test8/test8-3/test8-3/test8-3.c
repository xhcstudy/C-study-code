#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//1.����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int jiecheng = 1;
//	printf("������Ҫ�������n��");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		jiecheng = jiecheng * i;
//	}
//	printf("n�Ľ׳˵�ֵΪ:%d\n", jiecheng);
//	return 0;
//}

//2.����n�Ľ׳˺�  1!+2+...+n!
//�򻯰汾
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int n = 0;
//	int sum = 0;
//	int jiecheng = 1;
//	printf("������Ҫ�������n��");
//	scanf("%d", &n);
//	k = n;
//	for (j = 1; j <= k; j++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			jiecheng = jiecheng * i;
//		}
//		n--;
//		sum = sum + jiecheng;
//		jiecheng = 1;
//	}
//	printf("n�Ľ׳˺͵�ֵΪ:%d\n", sum);
//	return 0;
//}

//3.��һ�����������в��Ҿ����ĳ������n����дint binsearch(int x,int v[],int n);����:��v[0] <= v[1] <= v[2] <= ... <= v[n-1]�������в���x.
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//		//дһ�����룬��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//������Ԫ�ظ���
//	for (i = 0; i < sz; i++)//��Ϊ�������Ҫ����n��
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±�Ϊ:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}

//�۰�����㷨  ���߽ж��ֲ����㷨
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int right = sz - 1;//���±�
//	int left = 0;//���±�
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//	    else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{ 
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//4.��д���룬��ʾ����ַ��������ƶ������м���
//int main()
//{
//	char arr1[] = "yang ruo li i love you";
//	char arr2[] = "                      ";
//	int right = strlen(arr1) - 1;
//	int left = 0;
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);//��Ϣһ��
//		system("cls");// ִ��ϵͳ�����һ������-cls- �����Ļ
//	}
//	return 0;
//}
//5.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳����򡣣�
int main()
{
	char arr[] = {0};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("���������� ->");
		scanf("%s", arr);
		if (strcmp(arr, "123456") == 0)// ==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯�� - strcmp
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������������\n");
		}
	}
	if (i = 3)
	{
		printf("�������Σ��˳�����\n");
	}
	return 0;
}