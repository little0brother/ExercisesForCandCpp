#include <stdio.h>

void Reverse(char *str, int n) 
{
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        char temp = *(str + left);
        *(str + left) = *(str + right);
        *(str + right) = temp;

        left++;
        right--;
    }
}

int main()
{
    char* str = "abcdef";
    int n = strlen(str);

    printf("before: %s\n", str);
    Reverse(str, n);
    printf("after:  %s\n", str);

    return 0;
}