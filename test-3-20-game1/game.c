#include "game.h"

// ���̳�ʼ��
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0; 
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

// ��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		printf("%d ", row - i);
		// ��ӡһ�е�����
		for (j = 0; j < col; j++)
		{
			 if (j == col  - 1) 
			{
				printf(" %c \n  ", board[i][j]);
			}
			else 
			{
				printf(" %c |", board[i][j]);
			}
		}
		// ��ӡ�ָ��е�����
		if (i < row - 1) 
		{
			for (j = 0; j < col; j++)
			{
				if (j == col - 1) 
				{
					printf("---\n");
				}
				else
				{
					printf("---|");
				}
			}
		}
	}
	for (i = 0; i < row; i++) 
	{
		printf(" %d  ", i + 1);
	}
	printf("\n");
}

// �������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�������:>\n");
	while (1) 
	{
		printf("�������������꣨�ÿո������\n:>");
		scanf("%d %d", &x, &y);
		// �ж�x, y����ĺϷ���
		if (((x >= 1) && (x <= row)) && ((y >= 1) && (y <= col)))
		{
			if (board[col - y][x - 1] == ' ') 
			{
				board[col - y][x - 1] = 'x';
				break;
			}
			else 
			{
				printf("�����걻ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}

// ��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
	while (1) 
	{
		int x = rand() % col;
		int y = rand() % row;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'o';
			break;
		}
	}
}

// �ж������Ƿ�����
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

// �ж���Ϸ����
char IsWin(char board[ROW][COL], int row, int col) 
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row - 1; i++) // �ж���
	{
		if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]) && (board[i][1] != ' '))
		{
			return board[i][1];
		}
	}
	for (i = 0; i < row - 1; i++) // �ж���
	{
		if ((board[0][i] == board[1][i]) && (board[1][i] == board[2][i]) && (board[1][i] != ' '))
		{
			return board[1][i];
		}
	}

	// ���ϵ����¶Խ���
	if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]) && (board[1][1] != ' '))
	{
		return board[1][1];
	}

	// ���ϵ����¶Խ���
	if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2]) && (board[1][1] != ' '))
	{
		return board[1][1];
	}

	// �ж�ƽ��
	// ����1��ʾ����
	// ����0��ʾû��
	if (1 == IsFull(board, ROW, COL)) 
	{
		return '=';
	}
	return '>';
}















// �ж���Ϸ����
//// �Լ���һ��д������
//char IsWin(char board[ROW][COL], int row, int col) 
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row - 1; i++) 
//	{
//		if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]) && (board[i][1] != ' '))
//		{
//			return board[i][0];
//		}
//		else if ((board[0][i] == board[1][i]) && (board[1][i] == board[2][i]) && (board[1][i] != ' '))
//		{
//			return board[i][i];
//		}
//		else if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]) && (board[1][1] != ' '))
//		{
//			return board[1][1];
//		}
//		else if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2]) && (board[1][1] != ' '))
//		{
//			return board[1][1];
//		}
//		else
//		{
//			return '=';
//		}
//	}
//}