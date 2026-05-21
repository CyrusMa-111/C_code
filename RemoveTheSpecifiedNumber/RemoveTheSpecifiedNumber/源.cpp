#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N = 0;
	int arr[100] = { 0 };
	int D = 0;
	printf("请输入数字个数\n");
	scanf("%d", &N);
	printf("请输入存入的数字");
	for (int i = 0; i < N; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("请输入要删除的数\n");
	scanf("%d", &D);
	for (int i = 0; i < N; i++)
	{
		if (arr[i] != D)
		{
			printf("%d", arr[i]);
		}
	}
}
