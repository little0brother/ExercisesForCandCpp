/*��Ŀ��
����һ���������飬ʵ��һ��������
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
����ż��λ������ĺ�벿�֡�
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