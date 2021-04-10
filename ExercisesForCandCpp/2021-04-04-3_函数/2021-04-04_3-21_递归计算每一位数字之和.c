/*
* 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19

输入：1729，输出：19
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