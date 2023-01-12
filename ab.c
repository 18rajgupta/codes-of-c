#include<stdio.h>
int main(){
    int a,b,c;
    a=6;
    for(c=1;c<=a;c++)
    {for(b=1;b<=a-c;b++)
    printf(" ");
    for(b=1;b<=2*c-1;b++)
    printf("*");
    printf("\n");}
return 0;
}
