#include<stdio.h>
//#define �����ʶ������
//#define MAX 100
//#define ���Զ���� - ������
/*int Max(int x,int y)  //����ʵ��
{
	if(x>y)
		return x;
	else
		return y;
}*/
//��Ķ���
#define MAX(X,Y) (X>Y?X:Y)
int main()
{
	int a =10;
	int b =20;
	//int max = Max(a,b);//�����ķ�ʽ
	int max = MAX(a,b);    //��ķ�ʽ
	// max = a>b?a:b;
	printf("max = %d\n",max);
	return 0;
}