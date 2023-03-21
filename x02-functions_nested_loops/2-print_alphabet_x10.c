#include<stdio.h>
void print_alphabet_x10(void){
for(int i=0;i<10;i++){
for(char j='a';j<'z';j++){
putchar(j);}
}putchar('\n');
}
int main(){
print_alphabet_x10();
return (0);}
