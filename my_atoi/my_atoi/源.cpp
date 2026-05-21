#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <ctype.h>

int my_atoi(const char* str)
{
	long res = 0;
	char sign = 1;
	while (isspace(*str))
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign = -1;
		}
		str++;
	}
	while (isdigit(*str))
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (int)res * sign;

}
int main()
{
	char str[50] = {0};
	printf("ÇëÊäÈë×Ö·û´®\n");
	fgets(str, 50, stdin);
	printf("½á¹û: %d\n", my_atoi(str));

}