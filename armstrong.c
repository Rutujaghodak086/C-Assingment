// Write a program to check whether a given number is Armstrong number

#include<stdio.h>
int main()
{
    int temp,n,sum=0,r;
    printf("Enter number");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    printf("%d is armstrong",temp);
    else
    printf("%d is not armstrong",temp);
    return 0;
}