#include "main.h"
#include <stdio.h>
char *string_toupper(char *str)
{
  char *p=str;
  while(*p!='\0')
  {
    if(*p>="a" && *p<="z")
    {
      *p-=32;
    }
    p++;
  }
}
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
