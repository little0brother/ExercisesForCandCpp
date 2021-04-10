/*
* ʵ�ֺ���init() ��ʼ������Ϊȫ0
* ʵ��print()  ��ӡ�����ÿ��Ԫ��
* ʵ��reverse()  �����������Ԫ�ص����á�
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

// �ݹ齻�� ���ַ���������ͬ

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