#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����

//Ԥ����(Ԥ����) - �ı�����
//1.#include
//ͷ�ļ��İ���
//2.ע��ɾ��
//ʹ�ÿո����滻ע��
//3.#define
//#define MAX 100  �Ὣ����MAX�滻��100
//linux ϵͳ�� gcc -E test.c  ����һ�� test.i �ļ�   �Ὣ#include��ͷ�ļ����ݰ����ŵ�.c�ļ���  ����ɾ��ע�ͣ��ÿո��滻ע��  #define MAX 100  �Ὣ����MAX�滻��100


//���� - ��C���Դ��뷭��ɻ�����
//�﷨����
//�ʷ�����
//�������
//���Ż���
//linux ϵͳ�� gcc -S test.i  ����һ�� test.s �ļ�


//��� - �ѻ�����ת��Ϊ������ָ��
//�γɷ��ű�
//������ļ�ת��ΪĿ���ļ���Ŀ���ļ����Ѿ��Ǵ�ŵĶ����ƴ�����
//linux ϵͳ�� gcc -c test.s  ����һ�� test.o �ļ�

//����
//1.�ϲ��α�
//2.���ű�ĺϲ��ͷ��ű���ض�λ


//���л���
//�����ִ�й���
//1,.������������ڴ��С����в���ϵͳ�Ļ�����; һ������ɲ���ϵͳ��ɡ�
//�ڶ����Ļ����У����������������ֹ����ţ�Ҳ������ͨ����ִ�д�������ֻ���ڴ�����ɡ�
//2.�����ִ�б㿪ʼ�����ű����main������
//3.��ʼִ�г�����롣���ʱ�����ʹ��һ������ʱ��ջ(stack)���洢�����ľֲ������ͷ��ص�ַ��
//����ͬʱҲ����ʹ�þ�̬(static)�ڴ�, �洢�ھ�̬�ڴ��еı����ڳ��������ִ�й���һֱ�������ǵ�ֵ��
//4.��ֹ����������ֹmain����; Ҳ�п�����������ֹ��


//Ԥ�������


//Ԥ�������
//__FILE__ 

//int main()
//{
//	printf("%s\n", __FILE__);
//	return 0;
//}

//__LINE__
//int main()
//{
//	printf("%d\n", __LINE__);
//	return 0;
//}

//__DATE__
//int main()
//{
//	printf("%s\n", __DATE__);
//	return 0;
//}

//__TIME__
//int main()
//{
//	printf("%s\n", __TIME__);
//	return 0;
//}

//__STDC__   �����������ѭANSI C,��ֵΪ1������δ����

//д��־�ļ�
//int main()
//{
//	char arr[] = "yangruolibukaixin";
//	FILE* pf = fopen("log.txt", "w");
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	if (NULL == pf)
//	{
//		perror("__LINE__:");
//	}
//	//
//	for (i = 0; i < sz; i++)
//	{
//		fputc(arr[i], pf);
//	}
//	fprintf(pf, "\nfile:%s\nline:%d\ndata:%s\ntime:%s\n", __FILE__, __LINE__, __DATE__, __TIME__);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#define - Ԥ����ָ��  ���� #include  #pragma  #if   #endif   #ifdef   #line
//#define �����ʶ��
#define MAX 100
#define STR "hehe"
#define reg register
int main()
{
	reg int a;
	int max = MAX;
	printf("%d\n", max);
	printf("%s\n", STR);
	return 0;
}