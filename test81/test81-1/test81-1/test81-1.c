#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//命令行定义
//许多C的编译器提供了一种能力，允许在命令行中定义符号。用于启动编译过程。
//例如 : 当我们根据同一个源文件要编译出不同的一个程序的不同版本的时候，这个特性有点用处。
//（假定某个程序中声明了一个某个长度的数组，如果机器内存有限，我们需要一个很小的数组，但是另外一个机器内存大些，我们需要一个数组能够大些。)


//条件编译
//在编译一个程序的时候我们如果要将一条语句(一组语句）编译或者放弃是很方便的。因为我们有条件编译指令。
//#ifdef DEBUG    如果DEBUG未定义则不执行   定义过才执行
//...
//#endif

//#define DEBUG

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//1.
//#if  常量表达式
//    //...
//endif
//常量表达式由预处理器求值

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1		//如果常量表达式为真  语句参与编译    如果为假   语句不参与编译
//			//#if 0  就不执行语句
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//2.多分支的条件编译
//#if  常量表达式
//    //...
//#elif  常量表达式
//    //...
//#else
//    //...
//endif

//int main()
//{
//#if 1 == 1
//	printf("hehe\n");
//#elif 2 == 1
//	printf("haha\n");
//#else 3 == 1
//	printf("heihei\n");
//#endif
//	return 0;
//}

//3.判断是否被定义
//#if defined(symbol)
//#ifdef symbol
//
//#if !defined(symbol)
//#ifndef symbol
//#define DEBUG 0
//
//int main()
//{
//#if defined DEBUG
//	printf("hehe\n");
//#endif
//
//#ifdef DEBUG
//	printf("haha\n");
//#endif
//
//#if !defined MAX
//	printf("xixi\n");
//#endif
//
//#ifndef MAX
//	printf("嘿嘿\n");
//#endif
//	return 0;
//}

//4.嵌套指令
//#if defined(OS_UNIX)
//	#ifdef OPTION1
//		unix_version_option1();
//	#endif
//	#ifdef OPTION2
//		unix_version_option2();
//	#endif
//#elif defined(OS_MSDOS)
//	#ifdef OPTION2
//		msdos_version_option2();
//	#endif
//#endif


//文件包含
//我们已经知道，#include 指令可以使另外一个文件被编译。就像它实际出现于#include指令的地方一样。
//这种替换的方式很简单 : 预处理器先删除这条指令，并用包含文件的内容替换。这样一个源文件被包含10次，那就实际被编译10次。
//1.本地文件包含使用  
//#include "filename"
//	查找策略:先在源文件所在目录下查找，如果该头文件未找到，编译器就像查找库函数头文件一样在标准位置查找头文件。如果找不到就提示编译错误。linux环境的标准头文件的路径 :
//  /usr/include
//	VS环境的标准头文件的路径 :
//	C:\Program Files(x86)\Microsoft visua7 studio 9.0\vc\inc1ude
//	注意按照自己的安装路径去找。

//2.库文件包含使用
//#include <filename.h>
#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("hehe\n");
	printf("%d\n", c);
	return 0;
}

//如果避免嵌套头文件导致的多次包含同一个头文件
//写法1
//#ifndef __ADD_H__
//#define __ADD_H__

//int Add(int x, int y);

//#endif

//写法2
//#pragma once

//int Add(int x, int y);