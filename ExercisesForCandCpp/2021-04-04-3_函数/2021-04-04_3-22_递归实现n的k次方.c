//编写一个函数实现n的k次方，使用递归实现。

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MyPowHelper(int num, int n)
{
	if (n <= 0)
	{
		return 1;
	}

	return num * fun(num, n - 1);
}

float MyPow(int num, int n)
{
	int flag = 1;

	if (n < 0)
	{
		return 1.0 / MyPowHelper(num, n);
	}
	else
	{
		return MyPowHelper(num, n);
	}
}

int main()
{
	int num, n;
	printf("Please Input number: ");
	scanf("%d %d", &num, &n);

	int res = MyPow(num, n);

	printf("%d^%d result : %d\n", num, n, res);

	return 0;
}