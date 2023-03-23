#include<stdio.h>
void print_diagonal(int n)
{
if(n<=0){
putchar('\n');
return;}
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
    if(j==i){
    putchar("\\");
            }
      else{putchar(" ");
          }
            }
  putchar('\n');
}
}
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
