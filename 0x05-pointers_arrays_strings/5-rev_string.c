#include <stdio.h>
#include "main.h"

void rev_string(char *s)
{
    int i, j;
    char temp;
    for (j = 0; s[j] != '\0'; j++)
        ;
    for (i = 0; i < j / 2; i++)
    {
        temp = s[i];
        s[i] = s[j - i - 1];
        s[j - i - 1] = temp;
    }
}
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
