#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisPlayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	// ��ӡ����
	for (j = 0; j <= col + 1; j++)
	{
		if (j == col + 1)
		{
			printf("\n");
		}
		else if (j == 0)
		{
			printf("  %d  ", j);
		}
		else
		{
			printf("  %d ", j);
		}
	}

	for (i = 1; i <= row + 1; i++)
	{
		// ��ӡ�߿�
		for (j = 1; j <= col; j++)
		{
			if (j == col)
			{
				printf("+---+\n");
			}
			else if (j == 1)
			{
				printf("     +---");
			}
			else
			{
				printf("+---");
			}
		}
		if (i == row + 1)
		{
			break;
		}
		// ��ӡ������
		for (j = 1; j <= col; j++)
		{
			if (j == col)
			{
				printf("| %c |\n", board[i][j]);
			}
			else if (j == 1)
			{
				printf("  %d  | %c ", i, board[i][j]);
			}
			else
			{
				printf("| %c ", board[i][j]);
			}
		}
	}
	printf("\n");
}
/*
+---+---+---+
|   |   |   |
+---+---+---+
|   |   |   |
+---+---+---+
|   |   |   |
+---+---+---+
*/


// ������
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;// 1 - 9
		int y = rand() % col + 1;// 1 - 9
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int git_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';

}


// �Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("�������Ų��׵����꣺(�ո����)\n>:");
		scanf("%d %d", &x, &y);
		if (((x >= 1) && (x <= row)) && ((y >= 1) && (y <= col)))
		{
			// ����Ϸ�
			//1������
			if (mine[x][y] == '%')
			{
				printf("���ź����㱻ը��\n");
				DisPlayBoard(mine, row, col);
				break;
			}
			else // ������
			{
				// ����x,y������Χ�м�����
				int count = git_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisPlayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�������������");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�����׳ɹ�");
		DisPlayBoard(mine, row, col);
	}
}