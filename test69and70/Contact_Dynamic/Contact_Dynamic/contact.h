#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

//#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	int age;
}PeoInfo;

//ͨѶ¼����
typedef struct Contact
{
	struct PeoInfo* data;//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼�������
}Contact;


//��������
//��ʼ��ͨѶ¼
void InitContact(Contact* ps);

//����һ����Ϣ��ͨѶ¼
void AddContact(Contact* ps);

//��ӡͨѶ¼�е���Ϣ
void ShowContact(const Contact* ps);

//ɾ��ָ����ϵ��
void DelContact(Contact* ps);

//����ָ���˵���Ϣ
void SearchContact(const Contact* ps);

//�޸�ָ���˵���Ϣ
void ModifyContact(Contact* ps);

//����ͨѶ¼����
void SortContact(Contact* ps);

//���ٶ�̬���ٵ��ڴ�
void DestroyContact(Contact* ps);