#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//memcpy
//void * memcpy(void * destination, const void * source��size_t num);
//����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ�������������'\0'��ʱ�򲢲���ͣ������
//���source��destination���κε��ص������ƵĽ������δ����ġ�


#include <string.h>
#include <assert.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t n)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (n--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}


//int main()
//{
//	//int arr1[] = { 1, 2, 3, 4, 5 };
//	//int arr2[5] = { 0 };
//	//memcpy(arr2, arr1,sizeof(arr1));
//	struct Stu arr3[] = { { "����", 20 }, { "����", 15 } };
//	struct Stu arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}


//C���Ա�׼�涨:
//memcpy ֻҪ���� ���ص����ڴ濽���Ϳ���
//memmove �����ص��ڴ�Ŀ���

void* my_memmove(void* dest, const void* src, size_t n)
{

}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//memcpy(arr + 2, arr, 20);
	int i = 0;
	my_memmove(arr + 2, arr, 20);//�����ڴ��ص��������
	for (i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
