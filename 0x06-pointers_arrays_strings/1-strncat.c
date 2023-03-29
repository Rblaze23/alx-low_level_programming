#include "main.h"
#include <stdio.h>
char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest;
    while (*ptr != '\0')
        ptr++;
    while (*src != '\0' && n > 0)
    {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }
    *ptr = '\0';
    return dest;
}
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
