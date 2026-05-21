#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int fac(int k);
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int result = fac(k);
//	printf("%d", result);
//	return 0;
//}
//int	fac(int k)
//{
//	if (k > 1)
//	{
//		return k * fac(k - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}

int main()
{
	int n = 0;
	int sum = 1;
	scanf("%d", &n);
	for (int i = n; i > 0; i--)
	{
		sum = sum * i;
	}
	printf("%d", sum);

}

