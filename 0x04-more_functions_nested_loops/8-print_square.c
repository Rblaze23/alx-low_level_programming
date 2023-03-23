#include<stdio.h>
void print_square(int size){
if(size<=0){
putchar('\n');}
  for(int i=0;i<size;i++){
  for(int j=0;j<size;j++){
  putchar('#');
  }
        putchar('\n');
  }
}


int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}
