
// Accept radius of a circle and print the area and circumference of circle.


#include<stdio.h>
int main()
{
    float r,area,circumferance,PI=3.14;
    printf("Enter a radius");
    scanf("%f",&r);
    area=PI*r*r;
    circumferance=2*PI*r;
    printf("area=%.2f\n",area);
    printf("circumferance=%.2f",circumferance);
    return 0;
    
}