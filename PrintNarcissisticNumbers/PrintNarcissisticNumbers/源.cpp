#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()
{
	for (int n = 0; n <= 100000; n++)
	{
		int count = 0;
		int i = n;
		while (i != 0)
		{
			i = i / 10;
			count++;
		}
		int sum = 0;
		int temp = n;
		for (int i=0;i<count;i++)
		{
			
			int k = 0;
			k = temp % 10;
			sum = sum + pow(k, count);
			temp = temp / 10;
			
		}
		if (sum == n)
		{
			printf("%d\n", n);
		}
	}
}