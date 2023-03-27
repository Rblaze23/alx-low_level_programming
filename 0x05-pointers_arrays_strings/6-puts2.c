#include <stdio.h>

void puts2(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i += 2)
    {
        putchar(str[i]);
    }
    putchar('\n');
}
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
