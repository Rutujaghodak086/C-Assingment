// Write a program to find maximum of three numbers? (3-4 logics) and (with conditional operator). Modify and find minimum of three numbers.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Ener 3 number");
    scanf("%d%d%d",&a,&b,&c);
    b=(a>b)?a:b;
    b=(c>b)?c:b;
    printf("Max number is %d",c);
    return 0;
}