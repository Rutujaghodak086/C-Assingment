// Write a program to print even numbers from 100 to 150 
#include<stdio.h>
int main()
{
    int i;
    for(i=100;i<=150;i++)
    {
        if(i%2==0)
        {
            printf("\n%d",i);
        }
    }
    return 0;
}