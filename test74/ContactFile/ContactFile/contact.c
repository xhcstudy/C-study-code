#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//һ��ʼ�ܷ������˵���Ϣ����dataָ��Ŀռ���֮��������2���ռ�
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
		//���ļ����Ѿ���ŵ�ͨѶ¼�е���Ϣ���ص�ͨѶ¼��
		LoadContact(ps);
}

//��������
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
	//��ȡ�ļ��ŵ�ͨѶ¼��
	while (fread(&temp, sizeof(PeoInfo), 1, pf))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = temp;
		ps->size++;
	}

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}

void CheckCapacity(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//����
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(ps->data, (ps->capacity + 2)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

void AddContact(Contact* ps)
{
	//if (ps->size == MAX)
	//{
	//	printf("ͨѶ¼�������޷�����\n");
	//}
	//else
	//{
	//	printf("����������:>");
	//	scanf("%s", ps->data[ps->size].name);
	//	printf("����������:>");
	//	scanf("%d", &(ps->data[ps->size].age));
	//	printf("�������Ա�:>");
	//	scanf("%s", ps->data[ps->size].sex);
	//	printf("������绰:>");
	//	scanf("%s", ps->data[ps->size].tele);
	//	printf("�������ַ:>");
	//	scanf("%s", ps->data[ps->size].addr);
	//	ps->size++;
	//	printf("��ӳɹ�\n");
	//}
	//��⵱ǰͨѶ¼������
	//1.������ˣ������ӿռ�
	//2.���������ʲô������
	CheckCapacity(ps);
	//��������
	printf("����������:>");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");
}

void ShowContact(const Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		//����
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		//����
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
	return -1;//�Ҳ��������
}

void DelContact(Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//1.����Ҫɾ��������ʲôλ��
	//�ҵ��˷�����������Ԫ�ص��±꣬�Ҳ�������-1
	pos = FindByName(ps, name);
	//2.ɾ��
	if (-1 == pos)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//ɾ������
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		//����
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		//����
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
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸��˵���Ϣ������\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("����������:>");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[pos].addr);
		printf("�޸����\n");
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
	//дͨѶ¼�е����ݵ��ļ���
	//fprintf(pf, "%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}