#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
// ����ɨ�״���

#include "game.h"
void print()// ��ӡ�˵�
{
	printf("***************************\n");
	printf("***** 1.paly   0.exit *****\n");
	printf("***************************\n");
}

void game()// ɨ����Ϸ
{
	// * - ��
	// 0 - ����
	// 1 - ѡ�и�����ΧһȦ�м�����

	// �׵���Ϣ�Ĵ洢
	// 1�����ú��׵���Ϣ
	char mine[ROWS][COLS]; // 11*11

	// 2���Ų���׵���Ϣ
	char show[ROWS][COLS]; // 9*9

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');

	// ��ʼ������
	InitBoard(show, ROWS, COLS, '*');

	//// ��ӡ��������
	//DisPlayBoard(mine, ROW, COL);

	// ��ӡ��������
	DisPlayBoard(show, ROW, COL);

	// ������
	SetMine(mine, ROW, COL);
	//// ��ӡ��������
	//DisPlayBoard(mine, ROW, COL);

	// ɨ��
	FindMine(mine, show, ROW, COL);


	//printf("ɨ��\n");
}

void test()// �˵�ѡ��
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		print();
		printf("��ѡ��\n>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ������������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}