#include <stdio.h>

void SwapArr(int arr1[], int arr2[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}

int main()
{
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

	int len = 10;

	printf("swap before:\n");
	printf("arr1: ");
	for (int i = 0; i < len; i++)
	{
		printf("%2d ", arr1[i]);
	}
	printf("\narr2: ");
	for (int i = 0; i < len; i++)
	{
		printf("%2d ", arr2[i]);
	}

	SwapArr(arr1, arr2, 10);

	printf("\n\nswap after:\n");
	printf("arr1: ");
	for (int i = 0; i < len; i++)
	{
		printf("%2d ", arr1[i]);
	}
	printf("\narr2: ");
	for (int i = 0; i < len; i++)
	{
		printf("%2d ", arr2[i]);
	}

	return 0;
}