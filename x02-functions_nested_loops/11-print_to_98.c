#include <stdio.h>
void print_to_98(int n){
  if(n<=98){
  for(int i=n;i<=98;i++){printf("%d",i);}
  }
  else if(n>98){for(int j=n;j>98;j--){printf("%d",j);}
}
int main(){
  print_to_98(0);
  print_to_98(98);
  print_to_98(111);
  print_to_98(81);
  print_to_98(-10);
  return 0;}
