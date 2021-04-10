#include <stdio.h>

int FibonacciByIteration(int num)
{
	int a = 1;
	int b = 1;
	int sum = 0;

	for (int i = 2; i < num; i++)
	{
		sum = a + b;
		
		b = a;
		a = sum;
	}

	return sum;
}

int FibonacciBydigui(int num)
{
	if (num == 1 || num == 2)
	{
		return 1;
	}

	if (num > 2)
	{
		return FibonacciBydigui(num - 1) + FibonacciBydigui(num - 2);
	}

	return 0;
}

int main()
{
	int num = 9;

	int res = FibonacciByIteration(num);
	printf("迭代：前%d项和: %d\n", num, res);

	res = FibonacciBydigui(num);
	printf("递归：前%d项和: %d\n", num, res);

	return 0;
}