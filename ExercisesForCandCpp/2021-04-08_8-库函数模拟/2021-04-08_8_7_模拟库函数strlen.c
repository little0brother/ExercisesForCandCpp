#include <stdio.h>

int myStrlen(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}

int main()
{
	char* str = "abcdefg";

	printf("%s Length: %d", str, myStrlen(str));

	return 0;
}