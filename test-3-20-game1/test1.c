// 测试三子棋游戏
#include "game.h"

// 打印菜单
void menu() 
{
	printf("**************************\n");
	printf("**** 1.play    0.exit ****\n");
	printf("**************************\n");
}

// 游戏的整个算法的实现
void game() 
{
	char ret = 0;
	// 数组 - 存放棋盘的信息
	char board[ROW][COL] = { 0 };//全部空格

	// 初始化棋盘将棋盘的值全改为空格
	InitBoard(board, ROW, COL);

	// 打印棋盘
	DisplayBoard(board, ROW, COL);

	// 下棋
	while (1) 
	{
		// 玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		// 判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != '>') 
		{
			break;
		}

		// 电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		// 判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != '>')
		{
			break;
		}
	}
	if (ret == 'x')
	{
		printf("玩家赢\n");
	}
	else if (ret == 'o')
	{
		printf("电脑赢\n");
	}
	else if (ret == '=')
	{
		printf("平局\n");
	}
}

// 菜单选项
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input) 
		{
		case 1:
			printf("开始三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}
