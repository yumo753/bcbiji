#include "game.h"

// 棋盘初始化
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

// 打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		printf("%d ", row - i);
		// 打印一行的数据
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
		// 打印分割行的数据
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

// 玩家落子
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家落子:>\n");
	while (1) 
	{
		printf("请输入落子坐标（用空格隔开）\n:>");
		scanf("%d %d", &x, &y);
		// 判断x, y坐标的合法性
		if (((x >= 1) && (x <= row)) && ((y >= 1) && (y <= col)))
		{
			if (board[col - y][x - 1] == ' ') 
			{
				board[col - y][x - 1] = 'x';
				break;
			}
			else 
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}

// 电脑落子
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑落子\n");
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

// 判断棋盘是否满了
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

// 判断游戏进度
char IsWin(char board[ROW][COL], int row, int col) 
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row - 1; i++) // 判断行
	{
		if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]) && (board[i][1] != ' '))
		{
			return board[i][1];
		}
	}
	for (i = 0; i < row - 1; i++) // 判断列
	{
		if ((board[0][i] == board[1][i]) && (board[1][i] == board[2][i]) && (board[1][i] != ' '))
		{
			return board[1][i];
		}
	}

	// 左上到右下对角线
	if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]) && (board[1][1] != ' '))
	{
		return board[1][1];
	}

	// 右上到左下对角线
	if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2]) && (board[1][1] != ' '))
	{
		return board[1][1];
	}

	// 判断平局
	// 返回1表示满了
	// 返回0表示没满
	if (1 == IsFull(board, ROW, COL)) 
	{
		return '=';
	}
	return '>';
}















// 判断游戏进度
//// 自己听一半写的垃圾
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