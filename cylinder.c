

// Accept dimensions of a cylinder and print the surface area and volume
#include<stdio.h>
int main()
{
    float r,h,area,volume,PI=3.14;
    printf("Enter a radius");
    scanf("%f",&r);
    printf("Enter a Height");
    scanf("%f",&h);
    area=(2*PI*r*r)+(2*PI*r*h);
    volume=PI*r*r*h;
    printf("Area=%.2f\n",area);
    printf("volume=%.2f",volume);
    return 0;
}