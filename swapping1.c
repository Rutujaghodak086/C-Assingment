// Accept two integers from the user and interchange them. Display the interchanged numbers. whithout  Using temporary variable
// a.  Using + and – operator

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a Number");
    scanf("%d%d",&a,&b);
    printf("Before Swapping \n a=%d \n b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter Swapping \n a=%d \n b=%d",a,b);
    return 0;
}