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

//通讯录类型
typedef struct Contact
{
	struct PeoInfo* data;//存放一个信息
	int size;//记录当前已经有的元素个数
	int capacity;//当前通讯录最大容量
}Contact;


//声明函数
//初始化通讯录
void InitContact(Contact* ps);

//增加一个信息到通讯录
void AddContact(Contact* ps);

//打印通讯录中的信息
void ShowContact(const Contact* ps);

//删除指定联系人
void DelContact(Contact* ps);

//查找指定人的信息
void SearchContact(const Contact* ps);

//修改指定人的信息
void ModifyContact(Contact* ps);

//排序通讯录内容
void SortContact(Contact* ps);

//销毁动态开辟的内存
void DestroyContact(Contact* ps);