// Write a program to find sum of 1 to N (sum of first N numbers) (with  loop)

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a Number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum:%d",sum);
    return 0;
}