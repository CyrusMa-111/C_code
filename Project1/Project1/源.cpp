#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int brr[10] = { 2,4,6,8,10,12,14,16,18,20 };
	int tem = 0;
	for (int i = 0; i < 10; i++)
	{
		tem = arr[i];
		arr[i] = brr[i];
		brr[i] = tem;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i	]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", brr[i]);
	}
	return 0;
}