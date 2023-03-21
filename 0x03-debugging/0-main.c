#include <stdio.h>
 static void positive_or_negative(int i){
 if(i>=0){printf("positive number");}
 else
 {printf("negative number");}
 }
int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
