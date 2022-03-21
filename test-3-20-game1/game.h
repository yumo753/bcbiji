#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// 棋盘初始化
void InitBoard(char board[ROW][COL], int row, int col);

// 打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

// 玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

// 电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);



// 判断游戏进度
// 需要告诉我们四种状态
// 玩家赢	- ‘x’
// 电脑赢	- ‘o’
// 平局		- ‘=’
// 继续		- ‘>’
char IsWin(char board[ROW][COL], int row, int col);

// 判断棋盘是否满了
int IsFull(char board[ROW][COL], int row, int col);