#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�����ж���
//���C�ı������ṩ��һ���������������������ж�����š���������������̡�
//���� : �����Ǹ���ͬһ��Դ�ļ�Ҫ�������ͬ��һ������Ĳ�ͬ�汾��ʱ����������е��ô���
//���ٶ�ĳ��������������һ��ĳ�����ȵ����飬��������ڴ����ޣ�������Ҫһ����С�����飬��������һ�������ڴ��Щ��������Ҫһ�������ܹ���Щ��)


//��������
//�ڱ���һ�������ʱ���������Ҫ��һ�����(һ����䣩������߷����Ǻܷ���ġ���Ϊ��������������ָ�
//#ifdef DEBUG    ���DEBUGδ������ִ��   �������ִ��
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
//#if  �������ʽ
//    //...
//endif
//�������ʽ��Ԥ��������ֵ

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1		//����������ʽΪ��  ���������    ���Ϊ��   ��䲻�������
//			//#if 0  �Ͳ�ִ�����
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//2.���֧����������
//#if  �������ʽ
//    //...
//#elif  �������ʽ
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

//3.�ж��Ƿ񱻶���
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
//	printf("�ٺ�\n");
//#endif
//	return 0;
//}

//4.Ƕ��ָ��
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


//�ļ�����
//�����Ѿ�֪����#include ָ�����ʹ����һ���ļ������롣������ʵ�ʳ�����#includeָ��ĵط�һ����
//�����滻�ķ�ʽ�ܼ� : Ԥ��������ɾ������ָ����ð����ļ��������滻������һ��Դ�ļ�������10�Σ��Ǿ�ʵ�ʱ�����10�Ρ�
//1.�����ļ�����ʹ��  
//#include "filename"
//	���Ҳ���:����Դ�ļ�����Ŀ¼�²��ң������ͷ�ļ�δ�ҵ���������������ҿ⺯��ͷ�ļ�һ���ڱ�׼λ�ò���ͷ�ļ�������Ҳ�������ʾ�������linux�����ı�׼ͷ�ļ���·�� :
//  /usr/include
//	VS�����ı�׼ͷ�ļ���·�� :
//	C:\Program Files(x86)\Microsoft visua7 studio 9.0\vc\inc1ude
//	ע�ⰴ���Լ��İ�װ·��ȥ�ҡ�

//2.���ļ�����ʹ��
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

//�������Ƕ��ͷ�ļ����µĶ�ΰ���ͬһ��ͷ�ļ�
//д��1
//#ifndef __ADD_H__
//#define __ADD_H__

//int Add(int x, int y);

//#endif

//д��2
//#pragma once

//int Add(int x, int y);