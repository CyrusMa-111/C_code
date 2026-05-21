#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Binary_Search(int arr[], int left, int right, int key);
int main()
{
	int arr[10] = { 1,3,5,6,8,11,13,15,18,19 };
	int key = 18;
	int result = Binary_Search(arr, 0, 9, 18);
	printf("%d", result);
	return 0;
}
int Binary_Search(int arr[], int left, int right, int key)
{
	while (left <= right)
	{
		int m = (left + right) / 2;
		if (arr[m] < key)
		{
			left = m + 1;
		}
		else if (arr[m] > key)
		{
			right = m - 1;
		}
		else
		{
			return m;
		}
	}
	return -1;

}