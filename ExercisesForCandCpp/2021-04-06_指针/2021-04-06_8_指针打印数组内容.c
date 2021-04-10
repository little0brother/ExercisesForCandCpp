/*
写一个函数打印arr数组的内容，不使用数组下标，使用指针。

arr是一个整形一维数组。
*/

#include <stdio.h>

void PrintArr(int* arr, int length, int right)
{
	for (int i = length; i < right; i++)
	{
		printf("%d ", *(arr + i));
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5,6 ,7 ,8 ,8, 9, 19 };
	int n = sizeof(arr) / sizeof(arr[0]);

	PrintArr(arr, 0, n);

	return 0;
}