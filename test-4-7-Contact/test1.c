#define _CRT_SECURE_NO_WARNINGS 1
/*
1�����1000��������Ϣ
	����
	�绰
	�Ա�
	סַ
	����
2�����Ӻ�����Ϣ
3��ɾ��ָ��������Ϣ
4�����Һ�����Ϣ
5���޸ĺ�����Ϣ
6����ӡ������Ϣ
7������
*/

#include "contact.h"

void menu()
{
	printf("************************************\n");
	printf("******   1, ���Ӻ�����Ϣ      ******\n");
	printf("******   2��ɾ��ָ��������Ϣ  ******\n");
	printf("******   3�����Һ�����Ϣ      ******\n");
	printf("******   4���޸ĺ�����Ϣ      ******\n");
	printf("******   5����ӡ������Ϣ      ******\n");
	printf("******   6�����������Ϣ      ******\n");
	printf("******   0���˳�              ******\n");
	printf("************************************\n");
}

int main()
{
	int input = 0;

	// ����ͨѶ¼
	struct Contact con; // con����ͨѶ¼�����������1000��Ԫ�ص�����size

	
	// ��ʼ��ͨѶ¼
	InitContact(&con);

	do 
	{
		menu();
		printf("��ѡ��\n:>");
		scanf("%d", &input);

		switch (input)
		{
		//case 1: ���Ӵ���Ŀɶ��ԣ�0123ɶ�ı��˿�����
		case ADD:
			AddContact(&con);
			break;

		case DEL:
			DelContact(&con);
			break;
		
		case SEARCH:
			SeaechConract(&con);
			break;
		
		case MODIFY:
			ModifyContact(&con);
			break;

		case SHOW:
			ShowContact(&con);
			break;

		case SORT:
			printf("δ���\n");
			break;

		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;

		default:
			printf("ѡ������, ������ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}
