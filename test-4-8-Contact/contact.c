#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

// ��ʼ��ͨѶ¼����
void InitContact(struct Contact* ps)
{
	// ��̬���ٿռ䣬����ʼ��
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL) 
	{
		return 0;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
}

// ��������
void CheckCapacity(struct Contact* ps) 
{
	if (ps->size == ps->capacity)
	{
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
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

// ����ͨѶ¼-�ͷŶ�̬���ٵ��ڴ�
void DestroyContact(struct Contact* ps) 
{
	free(ps->data);
	ps->data = NULL;
}


// ���Ӹ�����Ϣ����
void AddContact(struct Contact* ps)
{
	// ��鵱ǰͨѶ¼������
	// 1��������ˣ������ӿռ�
	// 2�������������ɶҲ����

	CheckCapacity(ps);
	// ��������

	printf("����������\n:>");
	scanf("%s", ps->data[ps->size].name);

	printf("����������\n:>");
	//scanf("%d", ps->data[ps->size].age);// error
	scanf("%d", &(ps->data[ps->size].age));

	printf("�������Ա�\n:>");
	scanf("%s", ps->data[ps->size].sex);

	printf("������绰\n:>");
	scanf("%s", ps->data[ps->size].tele);

	printf("������סַ\n:>");
	scanf("%s", ps->data[ps->size].addr);

	ps->size++;
	printf("��ӳɹ�");
}


// ��ӡͨѶ¼����
void ShowContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "סַ");
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

// ��������
// ʹ�������contact.c�ļ��ڣ�������static��������Ϊ��̬�ֲ�����
static int FindBYname(struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

// ɾ��������Ϣ����
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ����ϵ�˵�����:>");
	scanf("%s", name);

	// 1,����Ҫɾ��������ʲôλ��
	int pos = FindBYname(ps, name);

	// 2��ɾ��
	if (pos == -1)
	{
		printf("Ҫɾ������ϵ�˲�����\n");
	}
	else
	{
		// ɾ������
		int j = 0;
		for (j = pos; j < ps->size - 1; j++) // ע��j=i
		{
			ps->data[j] = ps->data[j + 1];
		}
		printf("ɾ���ɹ�\n");
	}
	ps->size--;
}


// ���Ҹ�����Ϣ����
void SeaechConract(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ������ϵ�˵�����:>");
	scanf("%s", name);

	// 1,������ϵ����ʲôλ��
	int pos = FindBYname(ps, name);

	// ��ӡ��ϵ�˵���Ϣ
	// 2����ӡ
	if (pos == -1)
	{
		printf("Ҫ���ҵ���ϵ�˲�����\n");
	}
	else
	{
		// ��ӡ
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "סַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr
		);
		printf("���ҳɹ�\n");
	}
}


// �ı������Ϣ����
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�ı���Ϣ��ϵ�˵�����:>");
	scanf("%s", name);

	// 1,������ϵ����ʲôλ��
	int pos = FindBYname(ps, name);

	// �ı���ϵ����Ϣ
	// 2���޸�
	if (pos == -1)
	{
		printf("Ҫ�ı���Ϣ����ϵ�˲�����\n");
	}
	else
	{
		printf("����������\n:>");
		scanf("%s", ps->data[pos].name);

		printf("����������\n:>");
		scanf("%d", &(ps->data[pos].age));

		printf("�������Ա�\n:>");
		scanf("%s", ps->data[pos].sex);

		printf("������绰\n:>");
		scanf("%s", ps->data[pos].tele);

		printf("������סַ\n:>");
		scanf("%s", ps->data[pos].addr);

		printf("�޸����\n");
	}
}