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
	// 打印坐标
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
		// 打印边框
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
		// 打印数据行
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


// 布置雷
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


// 排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入排查雷的坐标：(空格隔开)\n>:");
		scanf("%d %d", &x, &y);
		if (((x >= 1) && (x <= row)) && ((y >= 1) && (y <= col)))
		{
			// 坐标合法
			//1、踩雷
			if (mine[x][y] == '%')
			{
				printf("很遗憾，你被炸了\n");
				DisPlayBoard(mine, row, col);
				break;
			}
			else // 不是雷
			{
				// 计算x,y坐标周围有几个雷
				int count = git_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisPlayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你排雷成功");
		DisPlayBoard(mine, row, col);
	}
}