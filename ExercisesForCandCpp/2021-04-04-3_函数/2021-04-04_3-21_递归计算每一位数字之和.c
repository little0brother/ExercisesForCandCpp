/*
* дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��

���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19

���룺1729�������19
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int DigitSum(int num)
{
	if (num <= 0)
	{
		return 0;
	}

	return ((num % 10) + DigitSum(num / 10));
}

int main()
{
	int num;
	printf("Please Input number cal sum: ");
	scanf("%d", &num);

	int res = DigitSum(num);

	printf("%d result : %d\n", num, res);

	return 0;
}