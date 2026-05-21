#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	for (int i = 0; i < 7; i++)
	{
		for (int k = 0; k < 6 - i; k++)
		{
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++)
		{
			printf("*");
		}
		printf("\n");

	}

	for (int i = 5; i >= 0; i--)
	{
		for (int k = 0; k < 6 - i; k++)
		{
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++)
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}