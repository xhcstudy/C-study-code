#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
//����
void InitBoard(char board[ROW][COL],int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//����������Ϸ������״̬
// 1. ���Ӯ  - '*'
// 2. ����Ӯ  - '#'
// 3. ƽ��    - 'Q'
// 4. ����    - 'C'
char IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);