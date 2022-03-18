#include<stdio.h>
#include<string.h>
enum COLOR
{
	red,
	yellow,
	blue
};
int main()
{
	enum COLOR color = yellow;
	const int num1 = 2;
	char arr1[] = "abc";
	char arr2[] = {'a','b','c'};
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr2));
	printf("%d\n%s\n",color,arr1);
	return 0;
}