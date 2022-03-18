#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
// getchar 和 putchar
int main()
{
	//int ch = getchar();
	//putchar(ch);
	//printf("%c\n", ch);
	int ch = 0;
	//ctrl + z
	//EOF - end of file -> -1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
//int main()
//{
//	//while语法结构
//	//while(表达式)  //先判断表达式是否为真，为真则执行，直到表达式为假停止循环
//	// 循环语句:
//	//屏幕上打印1-10
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		if (i == 5)
//			continue;//结束本次循环进入下一循环判断  不打印5了
//		printf("%d ", i);
//	}
//	//int i = 1;
//	//while (i <= 10)
//	//{
//	//	if (i == 5)
//	//		break;//结束循环
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	return 0;
//}

