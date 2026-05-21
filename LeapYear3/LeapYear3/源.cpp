#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int LeapYearOrNot(int year);
int LeapYearOrNot(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int input_year = 0;
	printf("请输入年份");
	scanf("%d", &input_year);
	if (LeapYearOrNot(input_year))
	{
		printf("闰年");
	}
	else
	{
		printf("平年");
	}
	return 0;

}
