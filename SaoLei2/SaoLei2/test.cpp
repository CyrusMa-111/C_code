#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("***************************\n");
	printf("******    1.play    *******\n");
	printf("***************************\n");
	printf("******    0.exit    *******\n");
	printf("***************************\n");
}
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	displayboard(show, ROW, COL);
	setmine(mine, ROW, COL);
	//displayboard(mine, ROW, COL);
	findmine(show, mine,ROW,COL);
	
	
}
int main()
{

	int input = 0;
	do
	{
		menu();
		printf("请输入");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("已退出");
		}
		default:
			printf("请重新输入");

		}
	
	} while (input);
	return 0;
}