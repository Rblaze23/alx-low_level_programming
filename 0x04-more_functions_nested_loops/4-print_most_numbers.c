#include<stdio.h>
void print_most_numbers(void){
for(int i=0;i<10;i++){
if(i!=2 &&i!=4){_putchar("0"+i);}
_putchar("\n");}
}
int main(void)
{
    print_most_numbers();
    return (0);
}
