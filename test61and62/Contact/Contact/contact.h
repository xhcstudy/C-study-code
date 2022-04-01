#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

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

struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	int age;
};

//ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};

//��������
//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps);

//����һ����Ϣ��ͨѶ¼
void AddContact(struct Contact* ps);

//��ӡͨѶ¼�е���Ϣ
void ShowContact(const struct Contact* ps);

//ɾ��ָ����ϵ��
void DelContact(struct Contact* ps);

//����ָ���˵���Ϣ
void SearchContact(const struct Contact* ps);

//�޸�ָ���˵���Ϣ
void ModifyContact(struct Contact* ps);

//����ͨѶ¼����
void SortContact(struct Contact* ps);