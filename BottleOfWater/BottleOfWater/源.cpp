#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int number(int total, int empty); 
int main()
{
	int total = 20;
	int empty = 20;
	int result = number(total, empty);
	printf("%d", result);
	return 0;
}
int number(int total, int empty)
{
	if (empty < 2)
		return total;
	else
	{
		total = total + empty / 2;
		int new_empty = empty / 2 + empty % 2;
		return number(total, new_empty);
	}
}