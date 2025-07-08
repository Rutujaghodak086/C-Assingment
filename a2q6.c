
// Write a program to accept three numbers and check whether the first is between the other two numbers. Ex: Input 20 10 30. Output: 20 is between 10 and 30

#include <stdio.h>

int main() {
    int a, b, c, median;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a > b && a < c) || (a < b && a > c))
        median = a;
    else if ((b > a && b < c) || (b < a && b > c))
        median = b;
    else
        median = c;

    printf("The median is: %d\n", median);

    return 0;
}