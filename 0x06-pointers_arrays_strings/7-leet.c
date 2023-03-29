#include "main.h"
#include <stdio.h>
char *leet(char *s)
{
    int i, j;
    char *letters = "aAeEoOtTlL";
    char *leet_chars = "4433007711";

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (str[i] == letters[j])
            {
                str[i] = leet_chars[j];
                break;
            }
        }
    }

    return str;
}
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
   return (0);
}
