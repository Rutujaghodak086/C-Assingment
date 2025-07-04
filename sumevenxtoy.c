#include<stdio.h>
int main()
{
    int i,x,y;
    printf("Enter a X");
    scanf("%d",&x);
    printf("Enter a y");
    scanf("%d",&y);
    for(i=x;i<=y;i++)
    {
        if(i%2==0)
        {
            printf("%d",i);
        }
    }
    return 0;
}