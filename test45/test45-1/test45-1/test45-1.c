#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�1ƿ��ˮ����20Ԫ�����Ժȶ�����ˮ(���ʵ��)
//int get_total(int n)
//{
//	int total = 0;
//	int empty = 0;
//	if (n == 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = 2 * n - 1;// 2����ƿ���Ի�һƿ��ˮ   ˵����ƿ��ֵ0.5  �����������ջ���һ����ƿ     20 / 0.5 = 40 - 1
//	}
//	////�������ֱ�Ӻȵ�
//	//total = n;
//	//empty = n;
//	////������ˮ
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	return total;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	printf("%d\n", get_total(n));
//}

//�������飬ʹ����ȫ��λ��ż��ǰ��
void Move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//ǰ�벿����ż������벿��������
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
}
void Print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[] = { 1, 3, 4, 5, 5, 6, 8, 8, 8, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Move(arr, sz);
	Print_arr(arr, sz);
}