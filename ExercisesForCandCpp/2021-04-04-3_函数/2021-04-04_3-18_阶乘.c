#include <stdio.h>

int Factorial(int num)
{
	if (num > 0)
		return num * Factorial(num - 1);
	else
		return 1;
}

int FactorialBydiedai(int num)
{
	int sum = 1;

	for (int i = num; i > 0; i--)
	{
		sum *= num--;
	}

	return sum;
}

int main()
{
	int num = 5;

	printf("�ݹ飺%d! = %d\n", num, Factorial(num));

	printf("������%d! = %d\n", num, FactorialBydiedai(num));

	return 0;
}