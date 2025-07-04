// Write a program to print 100 to 150

#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=100;i<=150;i++){
        sum+=i;
    }
    printf("Sum 100 To 150 :%d",sum);
    return 0;
}