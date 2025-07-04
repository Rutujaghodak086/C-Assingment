// Write a program to find sum of 1 to 5 (sum of first 5 numbers)

#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=5;i++)
    {
        sum+=i;
    }
    printf("Sum 1 to 5 :%d\n",sum);
    return 0;
}