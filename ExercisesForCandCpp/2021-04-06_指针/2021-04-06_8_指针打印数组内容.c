/*
дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣

arr��һ������һά���顣
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