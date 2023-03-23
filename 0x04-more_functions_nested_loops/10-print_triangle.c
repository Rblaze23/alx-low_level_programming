#include<stdio.h>
void print_triangle(int size)
{
  if(size<=0){putchar("\n");}
  for(int i=1;i<size;i++){
    for(int j=1;j<=size-i;j++){
    putchar(' ');
    }
    for(int k=1;k<=i;k++){
    putchar('#');
    }
    putchar('\n');
  }
}

int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
