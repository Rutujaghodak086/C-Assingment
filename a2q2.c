
// Write a program to check whether given number is positive or negative?

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Number is positive");
    }
    else
    {
        printf("Number is Negative");
    }
    return 0;
}