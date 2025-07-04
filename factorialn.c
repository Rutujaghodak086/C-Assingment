// Write a program to find factorial of N (N!)
#include<stdio.h>
int main()
{
    int n,i,f=1;
    printf("emter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("factorial =%d",f);
    return 0;
}