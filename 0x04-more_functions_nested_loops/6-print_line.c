#include<stdio.h>
void print_line(int n){
if(n<0){
_putchar("\n");}
else{
for(int i=0;i<n;i++)
{
putchar("_");
}
_putchar("\n");
}
}
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
