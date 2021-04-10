#include <stdio.h>

void myStrcpy(char* src, char* dst)
{
	while (*src != '\0')
	{
		*(dst++) = *src++;
	}
}

int main()
{
	char* src = "abcdefg";
	char cpy[64] = { 0 };

	myStrcpy(src, &cpy);

	printf("cpy : %s\n", cpy);

	return 0;
}