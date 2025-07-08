
// Write a program to check whether given number is even or odd (with conditional operator ?:)?
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    (n%2==0)?printf("even"):printf("Odd");
    return 0;
}