#include <stdio.h>
char *_strcat(char *dest, char *src)
{
  char *p=dest;
  while(*p!='\0'){
  p++;
 while(*src !='\0'){
 *p=*src;
   p++;
   src++;
 } 
  *p='\0';}
  return dest;
}
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
