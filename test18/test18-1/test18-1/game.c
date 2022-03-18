#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

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

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	//��ӡ��������
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;// 1 - row ������
		int y = rand() % col + 1;//������
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	//'1' - '0' = 0   '3' - '0' = 3  ASCII�����  '0'  ��48     '3'   ��51
	//�ַ�ת�����ֵĹؼ�  
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
		+ mine[x][y - 1] + mine[x][y + 1]
		+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}

//void show_mine_count(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)  //�ݹ���� ����Χû���׶���Ų�  ����չ�� ʧ��
//{
//	if (mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
//		+ mine[x][y - 1] + mine[x][y + 1]
//		+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 7 * '0' == '0')
//	{
//		show_mine_count(mine, show, x - 1, y - 1);
//		show_mine_count(mine, show, x - 1, y);
//		show_mine_count(mine, show, x - 1, y + 1);
//		show_mine_count(mine, show, x, y - 1);
//		show_mine_count(mine, show, x, y + 1);
//		show_mine_count(mine, show, x + 1, y - 1);
//		show_mine_count(mine, show, x + 1, y);
//		show_mine_count(mine, show, x + 1, y + 1);
//	}
//	show[x][y] = (mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
//		+ mine[x][y - 1] + mine[x][y + 1]
//		+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1]) - (7 * '0');
//	DisplayBoard(show, ROW, COL);
//}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)   
{
	int x = 0;
	int y = 0;
	int win = 0;// 9 * 9 - 10 = 71 ���������Ҫ�Ĵ���
	while (win < row * col - EASY_COUNT)
	{
		printf("��������Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			//1.����
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			//2.������
			else
			{
				/*'1' - '0' = 0 �ַ�ת�����ֵĹؼ�*/
				/*����x,y������Χ�м�����*/
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				//show_mine_count(mine, show, x, y);
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�����׳ɹ�\n");
		DisplayBoard(mine, row, col);
	}
}