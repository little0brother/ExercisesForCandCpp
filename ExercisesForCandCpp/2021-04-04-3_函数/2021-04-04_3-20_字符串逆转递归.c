#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 32

char res[SIZE];
int i = 0;

/*
void reverse_string(char* str)
{
	if (*str != '\0')
	{
		str++;
		reverse_string(str);
	}

	if (*str != '\0')
	{
		res[i++] = *str;
	}
}
*/

void reverse_string_helper(char* str, char* start, char* end)
{
	if (start > end)
	{
		return;
	}

	char temp = *start;
	*start = *end;
	*end = temp;

	reverse_string_helper(str, ++start, --end);
}

void reverse_string(char* str)
{
	char* start = str;
	char* end = str + strlen(str) - 1;

	reverse_string_helper(str, start, end);
}

int main()
{
	char arr[] = "abcdef";
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Reverse Before: %s\n", arr);

	reverse_string(arr);

	printf("Reverse After: %s\n", arr);

	return 0;
}