// Write a program to find maximum of three numbers? (3-4 logics) and (with conditional operator). Modify and find minimum of three numbers.

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter 3 number");
    scanf("%d%d%d",&a,&b,&c);
    printf("max is %.2f",fmax(a,(fmax(b,c))));
    return 0;

}