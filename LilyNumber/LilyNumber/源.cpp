#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	
	for (int i = 10000; i <= 99999; i++)
	{
		int left = 0;
		int right = 0;
		int sum = 0;
		for (int n = 10; n <= 10000; n = n * 10)
		{
			left = i / n;
			right = i % n;
			sum = sum + (left * right);
		}
		if (i == sum)
		{
			printf("%d ", i);
		}
		
	}

	return 0;
}