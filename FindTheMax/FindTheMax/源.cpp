#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int tem = 0;
	for (int i = 0; i < 10; i++)
	{
		
		if (arr[0] < arr[i])
		{
			tem = arr[0];
			arr[0] = arr[i];
			arr[i] = tem;
		}
	}
	printf("%d", arr[0]);
	return 0;
}