#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//指针和数组笔试题解析
int main()
{
	//数组名是首元素地址  下面是例外
	//1.sizeof(数组名) - 数组名表示整个数组
	//2.&数组名 - 数组名表示整个数组
	//3.定义数组的时候 int arr[] = { 1, 2, 3, 4 }; 
	//一维数组
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));			//16  - sizeof(数组名) - 计算数组总大小 - 单位是字节 - 16
	//printf("%d\n", sizeof(a + 0));		//4/8 - 数组名这里表示首元素地址  a + 0 还是首元素地址 地址大小就是4/8个字节
	//printf("%d\n", sizeof(*a));			//4   - 数组名这里表示首元素地址  *a就是首元素 sizeof(*a)四个字节
	//printf("%d\n", sizeof(a + 1));		//4/8 - 数组名这里表示首元素地址  a + 1 是第二个元素地址 地址大小就是4/8个字节
	//printf("%d\n", sizeof(&a));			//4/8 - &a取出的是数组的地址   地址的大小还是4/8个字节
	//printf("%d\n", sizeof(*&a));			//16  - &a是数组的地址  再解引用就是整个数组  相当于计算数组总大小 - 16
	//printf("%d\n", sizeof(&a + 1));		//4/8 - &a是数组的地址  &a + 1 相当于跳过整个数组后面的数组的地址 - 地址大小就是4/8个字节
	//printf("%d\n", sizeof(&a[0]));		//4/8 - &a是数组的地址  &a[0] 就是第一个元素的地址 - 地址大小就是4/8个字节
	//printf("%d\n", sizeof(&a[0] + 1));	//4/8 - &a是数组的地址  &a[0] + 1 就是第二个元素的地址 - 地址大小就是4/8个字节

	//字符数组
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));			//6
	//printf("%d\n", sizeof(arr + 0));		//4/8
	//printf("%d\n", sizeof(*arr));			//1
	//printf("%d\n", sizeof(arr[1]));		//1
	//printf("%d\n", sizeof(&arr));			//4/8
	//printf("%d\n", sizeof(&arr + 1));		//4/8
	//printf("%d\n", sizeof(&arr[0] + 1));	//4/8

	//strlen()里面要传一个地址
	printf("%d\n", strlen(arr));			//随机值	
	printf("%d\n", strlen(arr + 0));		//随机值
	//printf("%d\n", strlen(*arr));			//报错   非法访问地址  'a' - 97  会把97当作一个地址去访问
	//printf("%d\n", strlen(arr[1]));		//报错   非法访问地址  'b' - 98  会把97当作一个地址去访问
	printf("%d\n", strlen(&arr));			//随机值
	printf("%d\n", strlen(&arr + 1));		//随机值 与上面三个的随机值相差6
	printf("%d\n", strlen(&arr[0] + 1));	//随机值 与最上面三个的随机值相差1
	//return 0;
}