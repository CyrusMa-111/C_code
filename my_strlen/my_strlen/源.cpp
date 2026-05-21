#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strlen(char* p);
int my_strlen(char* p)
{
	char* start = p;
	while (*p != '\0')
	{
		p++;
	}
	return p - start;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}