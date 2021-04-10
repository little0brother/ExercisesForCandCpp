// 不允许创建临时变量，交换两个整数的内容

#include <stdio.h>

void Swap(int* a, int* b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int main()
{
	int a = 10;
	int b = 11;

	printf("\nbefore: a = %d b = %d\n", a, b);
	Swap(&a, &b);
	printf("\nafter:  a = %d b = %d\n", a, b);

	return 0;
}