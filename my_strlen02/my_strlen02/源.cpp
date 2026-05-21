#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(  char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}