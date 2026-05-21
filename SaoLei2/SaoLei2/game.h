#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
void initboard(char board[ROWS][COLS], int rows, int cols, int set);
void displayboard(char board[ROWS][COLS], int r, int c);
void setmine(char board[ROWS][COLS],int r, int c);
void findmine(char show[ROWS][COLS],char mine[ROWS][COLS], int r, int c);