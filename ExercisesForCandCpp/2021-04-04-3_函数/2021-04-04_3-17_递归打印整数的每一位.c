#include <stdio.h>

void PrintNum(int num)
{
	if (num > 1)
		PrintNum(num / 10);
	
	printf("%d ", num % 10);
}

int main()
{
	int num = 123;

	PrintNum(num);

	return 0;
}