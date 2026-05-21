#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void initboard(char board[ROWS][COLS],int rows,int cols,int set )
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}

}
void displayboard(char board[ROWS][COLS], int row, int col)
{
	for (int k = 0; k <= col; k++)
	{
		printf("%d ", k);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void setmine(char board[ROWS][COLS], int r, int c)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
size_t getminecount(char mine[ROWS][COLS], int x, int y)
{
	int count = 0;
	return (mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] +
		mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] +
		mine[x - 1][y + 1] + mine[x - 1][y] - 8 * '0');
	
}
void findmine(char show[ROWS][COLS],char mine[ROWS][COLS], int r, int c)
{
	int win = 0;
	int x = 0;
	int y = 0;

	while (win<r*c- EASY_COUNT)
	{
		printf("请输入坐标\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= r&&y >= 1 && y <= c)
		{
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '1')
				{

					printf("很遗憾，你被炸死了！\n");
					displayboard(mine, ROW, COL);
					break;
				}
				else
				{
					size_t count = getminecount(mine, x, y);
					show[x][y] = count + '0';
					displayboard(show, ROW, COL);
					win++;
				}
			}
			else
			{
				printf("排查过了，请重新输入\n");
			}

		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
	if (win == r * c - EASY_COUNT)
	{
		printf("恭喜你赢了！");
		displayboard(mine, ROW, COL);
	}
}