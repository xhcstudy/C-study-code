#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#define ���澡����Ҫ�ӷֺ�

//#define MAX 100;
//
//int main()
//{
//	int a = MAX;
//	printf("%d\n", MAX);
//	return 0;
//}


//#define �����
//#define���ư�����һ���涨������Ѳ����滻���ı���,����ʵ��ͨ����Ϊ��(macro)�����(define macro)
//#define name(parament - list)stuff ���е�parament - list ��һ���ɶ��Ÿ����ķ��ű����ǿ��ܳ�����stuff�С�
//ע�⣺�����б�������ű�����name���ڡ��������֮�����κοհ״��ڣ������б�ͻᱻ����Ϊstuff��һ���֡�

//#define SQUARE(X) X*X

//int main()
//{
//	//int ret = SQUARE(5);
//	////int ret = 5 * 5;
//	//printf("ret = %d\n", ret);
//	int ret = SQUARE(5 + 1);
//	printf("ret = %d\n", ret);//11 �겻�Ǵ��� �����滻  5 + 1 * 5 + 1 = 11
//	return 0;
//}

//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);//55
//	//int ret = 10 * a+a;
//	printf("ret = %d\n", ret);//��������֮��100 д���ʱ��Ҫ��������
//	return 0;
//}

//#define�滻����
//�ڳ�������չ#define������źͺ�ʱ����Ҫ�漰�������衣
//1.�ڵ��ú�ʱ�����ȶԲ������м�飬�����Ƿ�����κ���#define����ķ��š�������������ȱ��滻��
//2.�滻�ı���󱻲��뵽������ԭ���ı���λ�á����ں꣬�����������ǵ�ֵ�滻��
//3.����ٴζԽ���ļ�����ɨ�裬�������Ƿ�����κ���#define����ķ��š�����Ǿ��ظ�����������̡�
//ע�� :
//1.�������#define�����п��Գ�������#define����ı��������Ƕ��ں꣬���ܳ��ֵݹ顣
//2.��Ԥ����������#define����ķ��ŵ�ʱ���ַ������������ݲ�����������


//#��##

//#������

//���ַ�ʽ����ʵ�ֽ����������ַ�����
//void print(int a)    
//{
//	printf("the value of a is %d\n", a);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n", a);
//	print(a);
//	print(b);
//	return 0;
//}


//���ú�#X�ܸĽ�����ȱ�� ���������뵽�ַ�����
//#define PRINT(X) printf("the value of "#X" is %d\n",X)   //��a��ȥ  #X  == "a"

//int main()
//{
//	//printf("hello world\n");
//	//printf("hello " "world\n");
//	//printf("hel" "lo " "world\n");
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//���滻Ϊprintf("the value of ""a"" is %d\n", a);
//	PRINT(b);
//	return 0;
//}


//##������ - ##���԰�λ�������ߵķ��źϳ�һ�����š�������궨��ӷ�����ı�Ƭ�δ�����ʶ��

#define CAT(X,Y) X##Y

int main()
{
	int Class84 = 2019;
	//printf("%d\n", Class84);
	printf("%d\n", CAT(Class,84));
	//printf("%d\n", Class##84);
	//printf("%d\n", Class84);
	return 0;
}