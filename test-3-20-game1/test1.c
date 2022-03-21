// ������������Ϸ
#include "game.h"

// ��ӡ�˵�
void menu() 
{
	printf("**************************\n");
	printf("**** 1.play    0.exit ****\n");
	printf("**************************\n");
}

// ��Ϸ�������㷨��ʵ��
void game() 
{
	char ret = 0;
	// ���� - ������̵���Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�

	// ��ʼ�����̽����̵�ֵȫ��Ϊ�ո�
	InitBoard(board, ROW, COL);

	// ��ӡ����
	DisplayBoard(board, ROW, COL);

	// ����
	while (1) 
	{
		// �������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		// �ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != '>') 
		{
			break;
		}

		// ��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		// �жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != '>')
		{
			break;
		}
	}
	if (ret == 'x')
	{
		printf("���Ӯ\n");
	}
	else if (ret == 'o')
	{
		printf("����Ӯ\n");
	}
	else if (ret == '=')
	{
		printf("ƽ��\n");
	}
}

// �˵�ѡ��
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input) 
		{
		case 1:
			printf("��ʼ������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}
