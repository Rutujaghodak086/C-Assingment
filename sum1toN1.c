// Write a program to find sum of 1 to N (sum of first N numbers)(without loop)

#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter a number");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("Sum 1 to N mumber:%d",sum);
    return 0;
}