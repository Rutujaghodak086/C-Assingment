// Write a program to find maximum of three numbers? (3-4 logics) and (with conditional operator). Modify and find minimum of three numbers.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Ener 3 number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
    printf("max is  a %d",a);
    else if(b>=a && b>=c)
    printf("max is  b %d",b);
    else
    printf("max is c  %d",c);
    return 0;

}