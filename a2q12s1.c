
// Write a program to find maximum of three numbers? (3-4 logics) and (with conditional operator). Modify and find minimum of three numbers.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 Number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    b=a;
    if(c>b)
    b=c;
    printf("may is %d",b);
    return 0;
} 