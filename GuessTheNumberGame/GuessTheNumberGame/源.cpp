#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("*************************\n");
	printf("******   1.play   *******\n");
	printf("*************************\n");
	printf("******   2.exit   *******\n");
	printf("*************************\n");
}
void game()
{
	int r = rand() % 100 + 1;
	int g = 0;
	while (1)
	{
		printf("请输入:");
		scanf("%d", &g);
		if (g < r)
		{
			printf("猜小了\n");
		}
		else if (g > r)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束");
			break;
		default:
			printf("选择错误");
			break;
		}
	} while (input);
 return 0;

}