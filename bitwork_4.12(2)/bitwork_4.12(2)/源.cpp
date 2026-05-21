#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[3] = { 0 };
	
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%d",&arr[i]);
	}
	int j = 0;
	int temp = 0;
	int k = 0;
	for (k = 0; k < 2; k++)
	{



		for (j = 0; j < 2; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	for (i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}