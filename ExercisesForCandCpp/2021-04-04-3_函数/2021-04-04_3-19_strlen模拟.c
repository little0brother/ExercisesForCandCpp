#include <stdio.h>

int mystrlenByIter(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}

int mystrlenByRecur(char *str)
{
	static int count = 0;

	if (*str != '\0')
		mystrlenByRecur(str + 1);

	return count++;
}

int mystrlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}

	return 1 + mystrlen(str + 1);
}

int main()
{
	char str[] = "abcd1234";

	int count = mystrlenByIter(str);
	printf("µü´ú: %s length = %d\n", str, count);

	count = mystrlenByRecur(str);
	printf("µÝ¹é: %s length = %d\n", str, count);

	return 0;
}