/*
* ����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
*/

#include <stdio.h>

int fun(int num)
{
	int sum = num;

	while (num > 1)
	{
		sum += num / 2;
		num = num / 2 + num % 2;
	}

	return sum;
}

int main()
{
	int res = fun(20);

	printf("%d\n", res);

	return 0;
}