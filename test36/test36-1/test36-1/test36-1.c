#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����ָ���������;:ת�Ʊ�
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("****************************************\n");
//	printf("*******     1.add      2.sub      ******\n");
//	printf("*******     3.mul      4.div      ******\n");
//	printf("*******          0.exit           ******\n");
//	printf("****************************************\n");
//}
//int main()
//{
//	int input = 0;
//	int m = 0;
//	int n = 0;
//	int (*parr[])(int, int) = {0, add, sub, mul, div };
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:");
//			scanf("%d%d", &m, &n);
//			int ret = parr[input](m, n);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//		}
//		else
//		{
//			printf("ѡ��������������룡\n");
//		}
//	} while (input);
//	return 0;
//}

//ָ����ָ�������ָ�� - ��һ��ָ�룬ָ��ָ��һ�����飬�����Ԫ�ض��Ǻ���ָ��
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr; //����ָ��
//	int(*parr[4])(int, int) = { add, sub, mul, div };//����ָ������
//	int(*(*pparr)[4])(int, int);//ָ����ָ�������ָ��
//	return 0;
//}

//�ص����� - ͨ������ָ����õĺ���  �����add��sub��mul��div���ǻص�����
//void Calc(int(*pf)(int, int))
//{
//	int m = 0;
//	int n = 0;
//	printf("��������������:");
//	scanf("%d%d",&m,&n);
//	printf("%d\n",pf(m,n));
//}
//int main()
//{
//	int input = 0;
//	int (*parr[])(int, int) = {0, add, sub, mul, div };
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(add);
//			break;
//		case 2:
//			Calc(sub);
//			break;
//		case 3:
//			Calc(mul);
//			break;
//		case 4:
//			Calc(div);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("�������������!\n");
//		}
//	} while (input);
//	return 0;
//}

void BubbleSort(int arr[], int sz)
{
	//....
}
//qsort - ���������������͵�����
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}