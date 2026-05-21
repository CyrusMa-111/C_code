#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	union Test
	{
		int i;
		char k;
	};
	union Test t;
	t.i = 1;
	if (t.k == 1)
	{
		printf("t.k=%d ,是小端字节序", t.k);
	}
	else
	{
		printf("是大端字节序");
	}
	return 0;
}