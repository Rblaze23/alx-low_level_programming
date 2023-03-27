#include "main.h"
#include <stdio.h>
int _strlen(char *s)
{
    int len = 0;
    while (*s != '\0')
    {
        len++;
        s++;
    }
    return len;
}
void puts_half(char *str)
{
    int len = _strlen(str);
    int i;

    if (len % 2 == 0)
    {
        for (i = len / 2; i < len; i++)
        {
            putchar(str[i]);
        }
    }
    else
    {
        for (i = (len - 1) / 2 + 1; i < len; i++)
        {
            putchar(str[i]);
        }
    }
    putchar('\n');
}

int main(void)
{
    char *str = "0123456789";
    puts_half(str);
    return 0;
}

