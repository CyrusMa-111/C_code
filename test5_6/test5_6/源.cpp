#define _CRT_SECURE_NO_WARNINGS 1
#include <cstdlib>
#define MAX_SIZE 5
struct a
{
	unsigned char A : 4;//0~15
	unsigned char B : 2;//0~3
	unsigned char C;//8¸öÎ»
	unsigned char D : 1;//0 or 1
}*b;
struct a* pointer = (struct a*)malloc(sizeof(struct a) * MAX_SIZE);