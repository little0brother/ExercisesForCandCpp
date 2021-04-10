/*题目：
输入一个整数数组，实现一个函数，
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
所有偶数位于数组的后半部分。
*/


#include <stdio.h>

void switchOddEven(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
		{
			int temp = arr[i];
			arr[i] = arr[len - i - 1];
			arr[len - i - 1] = temp;
		}
	}
}

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(arr) / sizeof(arr[0]);

	printf("before:\n");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}

	switchOddEven(arr, len);

	printf("\nafter:\n");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}