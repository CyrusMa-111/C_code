#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("********************************\n");
	printf("********************************\n");
	printf("********    1. play    *********\n");
	printf("********    0. exit    *********\n");
	printf("********************************\n");
	printf("********************************\n");
	
}
void game(int r,int c,int mine_count)
{
	
	printf("扫雷\n");
	//给两个棋盘，一个是布置的雷盘，另一个是雷的信息盘
	char mineboard[MAX_ROWS][MAX_COLS] = { 0 };
	char showboard[MAX_ROWS][MAX_COLS] = { 0 };
	//需要初始化两个盘，雷盘全是‘0’，信息盘全是‘*’
	// 建一个用来初始化的函数
	InitBoard(mineboard, r, c, '0');
	InitBoard(showboard, r, c, '*');
	//设置雷
	SetMine(mineboard, r, c,mine_count);

	//打印棋盘
	//displayboard(mineboard, r, c);

	//布置雷，对mine数组进行操作
	displayboard(showboard, r, c);
	//排查雷，mine的雷传进show里
	FindMineboard(mineboard, showboard, r, c,mine_count);
	
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	int level = 0;
	do 
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
			case 1:
		{
			int playROW = 9;
			int playCOL = 9;
			int mine_count = 10;
			printf("请输入难度\n1.简单\n2.中等\n3.困难\n");
			scanf("%d", &level);
			switch(level)
			{
			case 1:
				playROW = 9;
				playCOL = 9;
				mine_count = 10;
				break;
			case 2:
				playROW = 16;
				playCOL = 16;
				mine_count = 40;
				break;
			case 3:
				playROW = 16;
				playCOL = 30;
				mine_count = 99;
				break;
			default:
				printf("输入错误，默认简单");
				playROW = 9;
				playCOL = 9;
				mine_count = 10;
				break;
			
			}
			game(playROW,playCOL,mine_count);
			break;
			case 0:
				printf("游戏已退出\n");
				break;
			default:
				printf("请重新输入\n");
				break;
		}

	} while (input);
		return 0;
}