#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	double sum = 0;
	double k = 0;
	for (int i = 0; i < 5; i++)
	{
		k = k + (n * pow(10, i));
		sum = sum + k;
	}
	printf("%.0f",sum);
	return 0;
}