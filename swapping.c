// Accept two integers from the user and interchange them. Display the interchanged numbers. Using temporary variable

#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter Two Integers");
    scanf("%d%d",&a,&b);
    printf("Before Swapping \n a=%d \n b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter Swapping \n a=%d \n b=%d",a,b);
    return 0;

}