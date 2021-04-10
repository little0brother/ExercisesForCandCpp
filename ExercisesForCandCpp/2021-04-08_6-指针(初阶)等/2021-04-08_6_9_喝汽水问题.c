/*
* 喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
*/

#include <stdio.h>

int fun(int num)
{
	int sum = num;

	while (num > 1)
	{
		sum += num / 2;
		num = num / 2 + num % 2;
	}

	return sum;
}

int main()
{
	int res = fun(20);

	printf("%d\n", res);

	return 0;
}