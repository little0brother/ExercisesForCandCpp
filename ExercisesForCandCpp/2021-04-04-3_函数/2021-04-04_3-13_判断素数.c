#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool IsPrimeNumber(int num)
{
	for (int i = 2; i < sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	for (int i = 100; i < 200; i++)
	{
		if (IsPrimeNumber(i))
		{
			printf("%d ", i);
		}
	}

	return 0;
}