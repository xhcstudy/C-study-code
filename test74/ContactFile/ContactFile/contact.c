#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//一开始能放三个人的信息，当data指向的空间满之后能扩容2个空间
void InitContact(Contact* ps)
{
	ps->data = (PeoInfo*)malloc(3 * sizeof(PeoInfo));
	if (ps->data == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
		ps->size = 0;
		ps->capacity = DEFAULT_SZ; 
		//把文件中已经存放的通讯录中的信息加载到通讯录中
		LoadContact(ps);
}

//声明函数
void CheckCapacity(Contact* ps);

void LoadContact(Contact* ps)
{
	PeoInfo temp = { 0 };
	FILE* pf = fopen("Contact.dat", "rb");
	if (NULL == pf)
	{
		printf("InitContact::%s\n", strerror(errno));
		return;
	}
	//读取文件放到通讯录中
	while (fread(&temp, sizeof(PeoInfo), 1, pf))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = temp;
		ps->size++;
	}

	//关闭文件
	fclose(pf);
	pf = NULL;
}

void CheckCapacity(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//增容
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(ps->data, (ps->capacity + 2)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}

void AddContact(Contact* ps)
{
	//if (ps->size == MAX)
	//{
	//	printf("通讯录已满，无法增加\n");
	//}
	//else
	//{
	//	printf("请输入名字:>");
	//	scanf("%s", ps->data[ps->size].name);
	//	printf("请输入年龄:>");
	//	scanf("%d", &(ps->data[ps->size].age));
	//	printf("请输入性别:>");
	//	scanf("%s", ps->data[ps->size].sex);
	//	printf("请输入电话:>");
	//	scanf("%s", ps->data[ps->size].tele);
	//	printf("请输入地址:>");
	//	scanf("%s", ps->data[ps->size].addr);
	//	ps->size++;
	//	printf("添加成功\n");
	//}
	//检测当前通讯录的容量
	//1.如果满了，就增加空间
	//2.如果不满，什么都不做
	CheckCapacity(ps);
	//增加数据
	printf("请输入名字:>");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("添加成功\n");
}

void ShowContact(const Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		//标题
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		//数据
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

static int FindByName(const Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;//找不到的情况
}

void DelContact(Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	//1.查找要删除的人在什么位置
	//找到了返回名字所在元素的下标，找不到返回-1
	pos = FindByName(ps, name);
	//2.删除
	if (-1 == pos)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除数据
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SearchContact(const Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		//标题
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		//数据
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
	}
}

void ModifyContact(Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("要修改人的信息不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[pos].addr);
		printf("修改完成\n");
	}
}

int cmp_by_name(const void* e1, const void* e2)
{
	PeoInfo* p1;
	PeoInfo* p2; 
	p1 = (PeoInfo*)e1;
	p2 = (PeoInfo*)e2;
	int ret = strcmp(p1->name, p2->name);
	return ret;
}
void SortContact(Contact* ps)
{
	qsort(ps->data, ps->size, sizeof(PeoInfo), cmp_by_name);
}

void DestroyContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}

void SaveContact(Contact* ps)
{
	int i = 0;
	FILE* pf = fopen("contact.dat", "wb");
	if (NULL == pf)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	//写通讯录中的数据到文件中
	//fprintf(pf, "%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	//for (i = 0; i < ps->size; i++)
	//{
	//	fprintf(pf, "%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
	//		ps->data[i].name,
	//		ps->data[i].age,
	//		ps->data[i].sex,
	//		ps->data[i].tele,
	//		ps->data[i].addr);
	//}
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(PeoInfo), 1, pf);
	}

	//关闭文件
	fclose(pf);
	pf = NULL;
}