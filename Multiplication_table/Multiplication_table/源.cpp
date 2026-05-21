#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int h[] = { 1,2,3,4,5,6,7,8,9 };
	int s[] = { 1,2,3,4,5,6,7,8,9 };
	int r[81] = { 0 };
	int i = 0;
	int j = 0;
	int k = 0;

	int index = 0;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			k = h[i] * s[j];
			r[index] = k;
			index++;
		}
	}
	for (i=0;i<9;i++)
	{
		index = 0;
		printf("\n");
		for (j=0;j<9;j++)
		{
			printf("%d*%d=%d ", h[i], s[j], r[index]);
			index++;
			
		}
	}
	return 0;
}
