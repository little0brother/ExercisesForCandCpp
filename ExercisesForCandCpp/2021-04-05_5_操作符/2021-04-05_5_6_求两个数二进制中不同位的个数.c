/*
* ���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 

	��������:

	1999 2299

	�������:7
*/

#include <stdio.h>

int count(int m, int n)
{
	int res = m ^ n;
	int count = 0;

	while (res >= 1)
	{
		// �����������2ȡ�࣬��������� ˵�����һλ��������һ��Ϊ 1 
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