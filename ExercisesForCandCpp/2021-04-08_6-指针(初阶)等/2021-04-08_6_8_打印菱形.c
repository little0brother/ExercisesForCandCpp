#include <stdio.h>

void PrintDiamond()
{
	int col = 13;
	int row = 7;

	// 上半部分
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (j < (col - row - i))
			{
				printf(" ");
			}
			else if (j == col - (col - row - i))
			{
				break;
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}

	// 下半部分
	for (int i = 0; i < row - 1; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (j < (i + 1))
			{
				printf(" ");
			}
			else if (j > col - (i + 2))
			{
				break;
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}

int main()
{
	PrintDiamond();

	return 0;
}