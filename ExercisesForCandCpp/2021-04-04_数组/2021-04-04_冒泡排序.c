#include <stdio.h>

void sortPop(int arr[], int left, int right)
{
	for (int i = left; i < right; i++)
	{
		for (int j = left; j < right - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = { -1, 5, 56, 2, 5, 8, 10, 13, 1, 2, 3 };

	int len = sizeof(arr) / sizeof(arr[0]);

	printf("sort before: ");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	sortPop(arr, 0, len);

	printf("sort after: ");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");	

	return 0;
}