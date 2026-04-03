#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[MAX_ROWS][MAX_COLS], int r, int c, char set)
{
	int i = 0;
	for (i = 0; i < MAX_ROWS; i++)
	{
		int j = 0;
		for (j = 0; j < MAX_COLS; j++)
		{
			board[i][j] = set;
		}
	}
}

void displayboard(char board[MAX_ROWS][MAX_COLS], int r, int c)
{
	int i = 0;
	printf("------扫雷------\n");
	for (i = 0; i <= c; i++)
	{
		// 原来可能是 printf("%d ", i);
// 改成下面这样：
		printf("%-2d ", i);
	}
	printf("\n");
	for (i = 1;i <= r; i++)
	{
		int j = 0;
		printf("%d ", i);
		if (i < 10)
		{
			printf(" ");
		}
		for (j = 1; j <= c; j++)
		{
			// 原来可能是 printf("%c ", board[i][j]);
// 改成下面这样：
			printf("%-2c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char mineboard[MAX_ROWS][MAX_COLS], int r, int c,int mine_count)
{
	int count = mine_count;
	//设置随机雷
	while (count)
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;
		if (mineboard[x][y] == '0')
		{
			mineboard[x][y] = '1';
			count--;
		}
	}
}

int GetMineCount(char mineboard[MAX_ROWS][MAX_COLS], int x, int y)
{
	//周围8个位置的值相加-8*‘0’
	return mineboard[x][y+1] + mineboard[x-1][y+1] + mineboard[x-1][y] + mineboard[x-1][y-1] + 
		mineboard[x][y-1] + mineboard[x+1][y-1] + mineboard[x+1][y] + mineboard[x+1][y+1] - 8 * '0';
}

void FindMineboard(char mineboard[MAX_ROWS][MAX_COLS], char showboard[MAX_ROWS][MAX_COLS], int r, int c,int mine_count)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < r*c-mine_count)
		{
		printf("调试信息：当前行r=%d, 列c=%d\n", r, c);
		printf("请输入坐标\n");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= r && y > 0 && y <= c)
		{
			if (mineboard[x][y] == '1')
			{
				printf("很遗憾，你被炸死啦");
				displayboard(mineboard, r, c);
			}
			else
			{
				if (showboard[x][y] == '*')
				{
					//统计mine数组中，x，y坐标周围有几个雷并把数字放在x，y上
					int d = GetMineCount(mineboard, x, y);
					showboard[x][y] = d + '0';
					displayboard(showboard,r,c);
					win++;
				}
				else
				{
					printf("该坐标已经被排查过了,重新输入坐标\n");
				}
			}
		}
		else
		{
			printf("输入的坐标非法，请重新输入\n");
		}
	}
	if (win == r * c - mine_count)
	{
		printf("恭喜你！排雷成功啦！\n");
		displayboard(mineboard, r, c);

	}
}


