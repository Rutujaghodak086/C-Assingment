// Accept temperatures in Fahrenheit(F) and print it in Celsius(C) and Kelvin (K).

#include<stdio.h>
int main()
{
    float f,c,k;
    printf("Enter a Temperature");
    scanf("%f",&f);
    c=(f-32)*5/9;
    // c=5/9*(f-32);
    k=c+273.15;
    printf("Celsius %.2f\n",c);
    printf("Kelvin %.2f",k);
    return 0;
}