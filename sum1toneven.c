// Write a program to find sum of even numbers from 1 to N
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("\n%d",i);
            sum+=i;
        }  
    }
     printf("\n%d",sum);
    return 0;
}