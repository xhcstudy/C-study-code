#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//memcpy
//void * memcpy(void * destination, const void * source，size_t num);
//函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位这个函数在遇到'\0'的时候并不会停下来。
//如果source和destination有任何的重叠，复制的结果都是未定义的。


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
//	struct Stu arr3[] = { { "张三", 20 }, { "李四", 15 } };
//	struct Stu arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}


//C语言标准规定:
//memcpy 只要处理 不重叠的内存拷贝就可以
//memmove 处理重叠内存的拷贝

void* my_memmove(void* dest, const void* src, size_t n)
{

}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//memcpy(arr + 2, arr, 20);
	int i = 0;
	my_memmove(arr + 2, arr, 20);//处理内存重叠的情况的
	for (i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
