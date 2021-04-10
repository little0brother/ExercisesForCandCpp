/*
*���0��100000֮������С�ˮ�ɻ������������

��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�����
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAXSIZE 6

bool Daffodil(int num)
{
	int length = 1;
	int numArr[6] = { 0 };

	// ���������зֽ�
	int temp = num;
	int len = 1;
	while (temp > 9)
	{
		temp /= 10;
		length *= 10;
		len++;
	}

	int i = 0;
	int tempNum = num;
	do
	{
		int n = tempNum / length;

		numArr[i++] = n;

		tempNum %= length;
		length /= 10;

	} while (length > 0);

	// �ж��Ƿ�Ϊˮ�ɻ���
	double sum = 0;
	for (int j = 0; j < i; j++)
	{
		sum += pow(numArr[j], len);
	}
	if (sum == num)
	{
		return true;
	}

	return false;
}

int main()
{
	printf("0 ~ 100000��ˮ�ɻ�����:\n");
	for (int i = 0; i < 100000; i++)
	{
		int flag = Daffodil(i);

		if (flag)
		{
			printf("%d ", i);
		}
	}

	return 0;
}