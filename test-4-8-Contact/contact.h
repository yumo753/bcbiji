#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DEFAULT_SZ 3

#define MAX 1000

#define MAX_NAME 20

#define MAX_SEX 5

#define MAX_TELE 12

#define MAX_ADDR 30
// ���������Ķ�����

enum Option
{
	EXIT,	// 0
	ADD,	// 1
	DEL,	// 2
	SEARCH,	// 3
	MODIFY,	// 4
	SHOW,	// 5
	SORT	// 6
};
// ���Ӵ���Ŀɶ���



// ������Ϣ����
struct PeoInfo
{
	char name[MAX_NAME]; // ����
	int age;			 // ���� 
	char sex[MAX_SEX];	 // �Ա�
	char tele[MAX_TELE]; // �绰
	char addr[MAX_ADDR]; // סַ
};

// ͨѶ¼����
struct Contact
{
	struct PeoInfo *data; // ���1000����Ϣ
	int size; // ��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity; // ��ǰͨѶ¼���������
		// ��size = capacity ʱ�������� 
};
// ����һ��ͨѶ¼�ṹ��, ����������Ԫ�أ�
// һ������ - data����������1000��Ԫ�أ�ÿ��Ԫ����һ��������Ϣ���͵Ľṹ��
// һ������ - size����¼�������Ѵ�ŵĸ�����Ϣ������


// ������ʼ������
void InitContact(struct Contact* ps);

// �������Ӹ�����Ϣ����
void AddContact(struct Contact* ps);

// ������ӡͨѶ¼��Ϣ����
void ShowContact(struct Contact* ps);

// s����ɾ��������Ϣ����
void DelContact(struct Contact* ps);

// �������Ҹ�����Ϣ����
void SeaechConract(struct Contact* ps);

// �����ı������Ϣ����
void ModifyContact(struct Contact* ps);

// ����ͨѶ¼-�ͷŶ�̬���ٵ��ڴ�
void DestroyContact(struct Contact* ps);