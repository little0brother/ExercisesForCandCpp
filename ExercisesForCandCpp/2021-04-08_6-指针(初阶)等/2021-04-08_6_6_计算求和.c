/*
* ��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
	���磺2+22+222+2222+22222
*/

#include <stdio.h>

#define SIZE 5

int CalSum(int num)
{
	int numArr[SIZE] = { 0 };
	int temp = num;

	for (int i = 0, j = 0; i < SIZE; i++)
	{
		// j����ǰ�����Ǽ�λ��
		while (j < i)
		{
			num = (num * 10) + temp;
			j++;
		}
		numArr[i] = num;
	}

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += numArr[i];
	}

	return sum;
}

int main()
{
	int input;
	scanf("%d", &input);

	int res = CalSum(input);

	printf("%d��ǰ����֮��Ϊ: %d\n", input, res);

	return 0;
}