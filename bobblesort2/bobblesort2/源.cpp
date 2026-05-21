#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bobblesort(int arr[],int sz)
{
	for (int i=0;i<sz;i++)
	{
		for (int j=0;j<sz-1-i;j++)
		{
			if(arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 11,4,2,6,3,5,10,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bobblesort(arr,sz);
}