#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//calloc
//C语言还提供了一个函数叫ca1loc, ca11oc 函数也用来动态内存分配。原型如下 :
//void* ca1loc(size_t num，size_t size); num - 元素个数  size - 每个元素大小(字节)
//函数的功能是为num 个大小为size的元素开辟一块空间，并且把空间的每个字节初始化为0。
//与函数mal1oc 的区别只在于 cal1oc 会在返回地址之前把申请的空间的每个字节初始化为全0。
//#include <stdio.h>
//#include <stdlib.h>

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态开辟的空间
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc
//realloc函数的出现让动态内存管理更加灵活。
//有时会我们发现过去申请的空间太小了，有时候我们又会觉得申请的空间过大了，那为了合理的使用内存，我们一定会对内存的大小做灵活的调整。
//那real1oc函数就可以做到对动态开辟内存大小的调整。函数原型如下 :
//void* rea1loc(void* ptr, size_t size);
//ptr是要调整的内存地址
//size调整之后新大小(字节)
//返回值为调整之后的内存起始位置。(有可能是原起始地址，也有可能是新的起始地址)
//这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到新的空间。

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//上面是在使用malloc开辟的40个字节的空间
//	//假设这里，40个字节不能满足我们的使用了
//	//我们希望能够有60个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//
//	//realloc使用的注意事项
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间
//	//最后返回新开辟的内存空间地址
//	//3.如果realloc调整失败,会返回空指针，将原来空间地址改成NULL，丢失地址
//	//4.所以得用一个新的变量来接受realloc的返回值
//	int* ptr = realloc(p, 60);
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 10; i < 15; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 15; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}


//常见的动态内存错误

//1.对NULL的解引用操作
//int main()
//{
//	int* p = malloc(40);
//	//万一malloc失败了，p就被赋值位NULL
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//2.对动态开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.对非动态开辟内存使用free释放
int main()
{
	int a = 10;
	int* p = &a;
	free(p);
	p = NULL;
	return 0;
}