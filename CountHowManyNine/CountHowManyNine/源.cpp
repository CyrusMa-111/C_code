#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	for (n = 0; n <= 100; n++)
	{
		if (n % 10 == 9)
		{
			count++;
		}
	}
	for (n = 0; n <= 100; n++)
	{
		if (n/10==9)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}