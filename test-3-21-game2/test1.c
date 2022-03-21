#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
// 测试扫雷代码

#include "game.h"
void print()// 打印菜单
{
	printf("***************************\n");
	printf("***** 1.paly   0.exit *****\n");
	printf("***************************\n");
}

void game()// 扫雷游戏
{
	// * - 雷
	// 0 - 非雷
	// 1 - 选中格子周围一圈有几个雷

	// 雷的信息的存储
	// 1、布置好雷的信息
	char mine[ROWS][COLS]; // 11*11

	// 2，排查出雷的信息
	char show[ROWS][COLS]; // 9*9

	//初始化有雷
	InitBoard(mine, ROWS, COLS, '0');

	// 初始化排雷
	InitBoard(show, ROWS, COLS, '*');

	//// 打印有雷棋盘
	//DisPlayBoard(mine, ROW, COL);

	// 打印排雷棋盘
	DisPlayBoard(show, ROW, COL);

	// 布置雷
	SetMine(mine, ROW, COL);
	//// 打印有雷棋盘
	//DisPlayBoard(mine, ROW, COL);

	// 扫雷
	FindMine(mine, show, ROW, COL);


	//printf("扫雷\n");
}

void test()// 菜单选项
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		print();
		printf("请选择：\n>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择有误，请重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}