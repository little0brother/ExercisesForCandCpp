//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

#include <stdio.h>

void PrintBin(int input)
{
	int temp = input;

	printf("\n����λ: ");
	for (int i = 0; i <= 30; i += 2)
	{
		printf("%d ", (temp >> (30 - i)) & 1);
	}
	printf("\nż��λ: ");
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