#pragma once
#include<stdio.h>
#include <stdlib.h>  // 为了用 rand 和 srand
#include <time.h>    // 为了用 time
// 定义这一局游戏可能用到的最大尺寸（比如困难模式是 16x30）
// --- 1. 定义最大物理尺寸（要够大，够放最难的模式+边框） ---
// 困难模式是 30 列，加上左右边框就是 32，咱们给 35 留点余量
#define MAX_ROWS 45
#define MAX_COLS 45

// --- 2. 这里的 ROW 和 COL 可以留着当“默认值” ---
// 比如在 switch 的 default 里用
#define DEFAULT_ROW 9
#define DEFAULT_COL 9
#define DEFAULT_COUNT 10

// 这里的 game 函数要加参数了，为了接收 test.c 传来的命令
void game(int r, int c, int mine_count);

// 所有的数组参数，[] 里统统改成 MAX_ROWS 和 MAX_COLS
// 所有的 int r, int c 是用来告诉函数“这次只用多大区域”
void InitBoard(char board[MAX_ROWS][MAX_COLS], int r, int c, char set);

void displayboard(char board[MAX_ROWS][MAX_COLS], int r, int c);

void SetMine(char mineboard[MAX_ROWS][MAX_COLS], int r, int c, int mine_count);

void FindMineboard(char mineboard[MAX_ROWS][MAX_COLS], char showboard[MAX_ROWS][MAX_COLS], int r, int c,int mine_count);
