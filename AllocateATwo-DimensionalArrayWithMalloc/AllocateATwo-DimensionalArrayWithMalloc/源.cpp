#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int row = 3;
	int col = 5;
	int* arr = NULL;
	arr = (int*)malloc(sizeof(int) * row * col);
	if (arr == NULL)
	{
		perror("use malloc");
		return 1;
	}
	for (int i = 0; i < (row*col); i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < row; i++)
	{
		for (int k = 0; k < col; k++)
		{
			int res = i * col + k;
			printf("arr[%d][%d]=%d  ", i, k, arr[res]);	
		}
		printf("\n");
	}
	free(arr);
	arr = NULL;
	return 0;
}