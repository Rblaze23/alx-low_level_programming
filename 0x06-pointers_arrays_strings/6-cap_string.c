#include "main.h"
#include <stdio.h>

char *cap_string(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'
            || str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
            str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '\"' ||
            str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
            str[i - 1] == '}') && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] -= 32;
        }
    }

    return (str);
}
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
