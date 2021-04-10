/*
* 编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 

	输入例子:

	1999 2299

	输出例子:7
*/

#include <stdio.h>

int count(int m, int n)
{
	int res = m ^ n;
	int count = 0;

	while (res >= 1)
	{
		// 利用异或结果对2取余，如果有余数 说明最后一位二进制数一定为 1 
		if (res % 2 == 1)
		{
			count++;
		}

		res >>= 1;
	}

	return count;
}

int main()
{
	int m;
	int n;

	scanf("%d %d", &m, &n);

	int res = count(m, n);

	printf("%d\n", res);

	return 0;
}