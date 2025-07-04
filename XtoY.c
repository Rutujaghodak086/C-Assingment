
// Write a program to print x to y (both inclusive)


#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Enter X and Y(x<=y)");
    if(scanf("%d %d",&x,&y)!=2)
    {
        printf("Invalid input\n");
        return 1;
    }
    if(x>y)
    {
        printf("x is less than equal to y");
        return 1;
    }
    printf(" Number %d to %d\n",x,y);
    for(i=x;i<=y;i++){

        printf("%d ",i);
    }
    printf("\n ");
    return 0;
    
}