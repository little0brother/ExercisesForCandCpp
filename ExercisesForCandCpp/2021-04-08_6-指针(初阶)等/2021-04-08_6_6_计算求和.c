/*
* 求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
	例如：2+22+222+2222+22222
*/

#include <stdio.h>

#define SIZE 5

int CalSum(int num)
{
	int numArr[SIZE] = { 0 };
	int temp = num;

	for (int i = 0, j = 0; i < SIZE; i++)
	{
		// j代表当前数字是几位数
		while (j < i)
		{
			num = (num * 10) + temp;
			j++;
		}
		numArr[i] = num;
	}

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += numArr[i];
	}

	return sum;
}

int main()
{
	int input;
	scanf("%d", &input);

	int res = CalSum(input);

	printf("%d的前五项之和为: %d\n", input, res);

	return 0;
}