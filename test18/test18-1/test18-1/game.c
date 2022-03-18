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
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	//打印棋盘内容
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行号
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
		int x = rand() % row + 1;// 1 - row 横坐标
		int y = rand() % col + 1;//纵坐标
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	//'1' - '0' = 0   '3' - '0' = 3  ASCII码表中  '0'  是48     '3'   是51
	//字符转化数字的关键  
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
		+ mine[x][y - 1] + mine[x][y + 1]
		+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}

//void show_mine_count(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)  //递归调用 若周围没有雷多次排查  快速展开 失败
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
	int win = 0;// 9 * 9 - 10 = 71 完成排雷需要的次数
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入想要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			//1.踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			//2.不是雷
			else
			{
				/*'1' - '0' = 0 字符转化数字的关键*/
				/*计算x,y坐标周围有几个雷*/
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				//show_mine_count(mine, show, x, y);
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}