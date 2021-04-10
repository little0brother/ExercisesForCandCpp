// 写一个函数返回参数二进制中 1 的个数。
// 比如： 15    0000 1111    4 个 1

#include <stdio.h>

int Bin1Count(int num)
{
	int count = 0;

	for (; num; count++)
	{
		// 将最低为的1置为0 直到整个数变成0
		num = num & (num - 1);
	}

	//while (num >= 1)
	//{
	//	// 如果能被2整除 则代表末尾为1
	//	if (num % 2 == 1)
	//	{
	//		count++;
	//	}
	//	num >>= 1;
	//}

	return count;
}

int main()
{
	int input;

	scanf("%d", &input);

	int res = Bin1Count(input);
	printf("%d 个 1", res);

	return 0;
}