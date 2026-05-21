#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void leftrotate(char arr[],int sz)
{
	int n = 0;
	int len = sz - 1;
	printf("请输入要左旋的字符数");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for(int j=0;j<len-1;j++)
		{
			char temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
		}
	}
	for (int i = 0; i < len; i++)
	{
		printf("%c", arr[i]);
	}

}


int main() 
{
	char arr[] = "ABCD";
	int sz = sizeof(arr) / sizeof(arr[0]);
	leftrotate(arr, sz);
}
