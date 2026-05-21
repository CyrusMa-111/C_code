//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	double add = 0.0;
//	double sub = 0.0;
//	double result = 0.0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 2 != 0)
//		{
//			add = add + 1.0 / n;
//		}
//		if (n % 2 == 0)
//		{
//			sub = sub + 1.0 / n;
//		}
//	}
//	result = add - sub;
//	printf("%lf", result);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	double sum = 0.0;
	int sign = 1;
	for (n=1;n<=100;n++)
	{
		sum = sum + sign*(1.0 / n);
		sign = -sign;
	}
	printf("%lf", sum);

	return 0;
}


