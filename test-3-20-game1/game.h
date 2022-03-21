#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// ���̳�ʼ��
void InitBoard(char board[ROW][COL], int row, int col);

// ��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

// �������
void PlayerMove(char board[ROW][COL], int row, int col);

// ��������
void ComputerMove(char board[ROW][COL], int row, int col);



// �ж���Ϸ����
// ��Ҫ������������״̬
// ���Ӯ	- ��x��
// ����Ӯ	- ��o��
// ƽ��		- ��=��
// ����		- ��>��
char IsWin(char board[ROW][COL], int row, int col);

// �ж������Ƿ�����
int IsFull(char board[ROW][COL], int row, int col);