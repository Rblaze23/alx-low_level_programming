#include<stdio.> 
void print_rev(char *s){
  int len;
  char c='\0';
  len=_strlen(s);
for(int i=len-1;i>=0;i--){
c=s[i];
  prinf("%c",c);
}printf("\n");
}
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
