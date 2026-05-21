#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void ChangeTheOrder(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while (left < right && arr[left] % 2 != 0)
		{
			left++;
		}
		while (left < right && arr[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
}
int main()
{
	int arr[] = { 1,2,4,6,3,7,14,17,19,20 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	ChangeTheOrder(arr,sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}