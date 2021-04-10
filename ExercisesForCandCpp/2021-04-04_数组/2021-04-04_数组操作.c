/*
* 实现函数init() 初始化数组为全0
* 实现print()  打印数组的每个元素
* 实现reverse()  函数完成数组元素的逆置。
*/

#include <stdio.h>

#define SIZE 10

void Init(int arr[])
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = 0;
	}
}

void Print(int arr[], int left, int right)
{
	for (int i = left; i < right; i++)
	{
		printf("%2d ", arr[i]);
	}
}

void Reverse(int arr[])
{
	for (int i = 0; i < SIZE / 2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[SIZE - i - 1];
		arr[SIZE - i - 1] = temp;
	}
}

// 递归交换 与字符串逆序相同

int main()
{
	int arr[SIZE];

	Init(arr);

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = i + 1;
	}

	Print(arr, 0, SIZE);

	printf("\n");
	Reverse(arr);
	Print(arr, 0, SIZE);

	return 0;
}