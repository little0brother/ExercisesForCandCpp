// дһ���������ز����������� 1 �ĸ�����
// ���磺 15    0000 1111    4 �� 1

#include <stdio.h>

int Bin1Count(int num)
{
	int count = 0;

	for (; num; count++)
	{
		// �����Ϊ��1��Ϊ0 ֱ�����������0
		num = num & (num - 1);
	}

	//while (num >= 1)
	//{
	//	// ����ܱ�2���� �����ĩβΪ1
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
	printf("%d �� 1", res);

	return 0;
}