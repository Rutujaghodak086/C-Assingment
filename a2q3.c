// Write a program to check whether given number is even or odd (with if and conditional operator ?:)?

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Number is even");
    }
    else{
        printf("Number is Odd");
    }
    return 0;
}