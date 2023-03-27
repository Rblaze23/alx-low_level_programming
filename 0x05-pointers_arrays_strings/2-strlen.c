#include <stdio.h>
int _strlen(char *s){
  int len=0;
while(*s!='\0'){
s++;
  len++;
}return len;
}
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
