// Write a program to accept to integers x and n computer x^n.

#include<stdio.h>
int main()
{
    int x,n,i;
    printf("enter no");
    scanf("%d",&n);
    printf("enter ^n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=x*i;
    }
    printf("\n x^n =%d",x);
    return 0;
}