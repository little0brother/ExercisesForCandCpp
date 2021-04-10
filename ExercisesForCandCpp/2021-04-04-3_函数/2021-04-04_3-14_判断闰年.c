#include <stdio.h>
#include <stdbool.h>

bool IsLeapYear(int i)
{
	if ((i % 4 == 0 && i % 100 != 0) || (i % 100 == 0 && i % 400 == 0))
	{
		return true;
	}

	return false;
}

int main()
{
	for (int i = 1000; i <= 2000; i++)
	{
		if (IsLeapYear(i))
		{
			printf("%d ", i);
		}
	}

	return 0;
}