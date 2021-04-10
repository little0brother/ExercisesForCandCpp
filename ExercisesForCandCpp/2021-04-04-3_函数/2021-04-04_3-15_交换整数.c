#include <stdio.h>

void SwapNumber(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main()
{
	int a = 10;
	int b = 20;

	printf("a= %d, b= %d\n", a, b);
	SwapNumber(&a, &b);
	printf("a= %d, b= %d\n", a, b);

	return 0;
}