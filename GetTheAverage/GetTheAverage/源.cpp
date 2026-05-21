#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = {0};
	for (int i = 0; i < 10;i++)
	{
		scanf("%d", &arr[i]);
	}
	int a = 0;
	for (int n = 0; n < 10; n++)
	{
		a = a + arr[n];
	}
	printf("%.2f", a / 10.0);
	return 0;

}