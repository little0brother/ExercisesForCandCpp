/*
*求出0～100000之间的所有“水仙花数”并输出。

“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAXSIZE 6

bool Daffodil(int num)
{
	int length = 1;
	int numArr[6] = { 0 };

	// 对整数进行分解
	int temp = num;
	int len = 1;
	while (temp > 9)
	{
		temp /= 10;
		length *= 10;
		len++;
	}

	int i = 0;
	int tempNum = num;
	do
	{
		int n = tempNum / length;

		numArr[i++] = n;

		tempNum %= length;
		length /= 10;

	} while (length > 0);

	// 判断是否为水仙花数
	double sum = 0;
	for (int j = 0; j < i; j++)
	{
		sum += pow(numArr[j], len);
	}
	if (sum == num)
	{
		return true;
	}

	return false;
}

int main()
{
	printf("0 ~ 100000的水仙花数有:\n");
	for (int i = 0; i < 100000; i++)
	{
		int flag = Daffodil(i);

		if (flag)
		{
			printf("%d ", i);
		}
	}

	return 0;
}