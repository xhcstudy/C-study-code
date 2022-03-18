#include<stdio.h>
/*int Max(int x,int y)
{
	int z = 0;
	if(x>y)
		z = x;
	else
		z = y;
	return z;
}*/
int main()
{
	/*int max = 0;
	int num1 = 10;
	int num2 = 20;
	max = Max(num1,num2);
	printf("max = %d\n",max);*/
	int a = 10;
	int arr[] = {1,2,3,4,5,6,7,8};
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof a);
	printf("%d\n",sizeof(arr));
	printf("数组的元素个数:%d\n",sizeof(arr)/sizeof(arr[0]));
	return 0;
}