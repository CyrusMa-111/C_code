#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int is_prime(int a);
int is_prime(int a)
{
	int flag = 1;//假设是素数
	for (int i = 2; i <= sqrt(a); i++)//循环除2--根号a
	{
		
		if (a % i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
int main()
{
	printf("100-200间的素数有：\n");	
	for (int i = 100; i < 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

