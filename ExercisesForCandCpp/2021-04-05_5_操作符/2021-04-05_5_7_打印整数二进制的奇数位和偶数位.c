//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

#include <stdio.h>

void PrintBin(int input)
{
	int temp = input;

	printf("\n奇数位: ");
	for (int i = 0; i <= 30; i += 2)
	{
		printf("%d ", (temp >> (30 - i)) & 1);
	}
	printf("\n偶数位: ");
	for (int i = 1; i <= 31; i += 2)
	{
		printf("%d ", (temp >> (32 - i)) & 1);
	}
}

int main()
{
	int input;

	scanf("%d", &input);

	PrintBin(input);

	return 0;
}