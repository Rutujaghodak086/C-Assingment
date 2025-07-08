// Write a program to check whether given number is divisible by 5 and 7? (with && operator and with nested if)

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n%5==0 && n%7==0)
        printf("number is divisible by 5 & 7",n);
    else if(n%5==0 && n%7!=0)
    printf("number is  divisible by  5 ",n);
    else if(n%5!=0 && n%7==0)
    printf("number is divisible by 7",n);
    else
    printf("number is not divisible by 5 & 7");
    return 0;
}