#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
int main()
{
	int* ptr = NULL;
	ptr = (int*)malloc(sizeof(int) * 5);
	if (ptr != NULL)
	{
		for (int i = 0; i < 5; i++)
		{
			ptr[i] = i + 1;
		}

		for (int i = 0; i < 5; i++)
		{
			printf("%d ", ptr[i]);
		}
		printf("\n");
	}
	else
	{
		perror("use malloc");
		free(ptr);
		ptr = NULL;
		return 1;
	}
	
	int* p = NULL;
	p = (int*)realloc(ptr, sizeof(int) * 10);
	if (p != NULL)
	{
		ptr = p;
		p = NULL;
	}
	else
	{
		perror("use realloc");
		free(ptr);
		ptr = NULL;
		return 1;
	}
	
	for (int i = 5; i < 10; i++)
	{
		ptr[i] = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", ptr[i]);
	}
	free(ptr);
	ptr = NULL;

	return 0;
}