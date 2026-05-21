#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int print_multiplication(int n);
int main()
{

	int n = 0;
	printf("请输入乘法表的行列数");
	scanf("%d",&n);
	print_multiplication(n);
}
int print_multiplication(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("%d*%d =%d\t", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}