#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
////ģ��ʵ��memcpy
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	char* ret = (char*)dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
////ģ��ʵ��memmove
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	char* ret = dest;
//	if (dest < src)
//	{
//		//ǰ -> ��
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//�� -> ǰ
//		while (count--)
//		{
//			*(((char*)dest) + count) = *(((char*)src) + count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 40);
//	my_memmove(arr1, arr1 + 2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//memcmp - �ڴ�Ƚ�
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 5, 4, 3 };
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d\n",ret);
//	return 0;
//}


//memset - �ڴ�����
int main()
{
	//char arr[10] = "";
	////memset - ���û�����Ϊ�ض����ַ�
	//memset(arr, '#', 10);
	int arr[10] = { 0 };
	memset(arr, 1, 10);//�ĵĵ�λ���ֽ�  С������
	return 0;
}