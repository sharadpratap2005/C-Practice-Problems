/*Write a program to determine whether the roots of a quadratic equation ax^2 + bx + c = 0 are real or imaginary. If they are real, find the roots and display them. */

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, x1, x2;
    printf("This Program can calculate the roots of  a quadratic equation ax^2 + bx + c = 0.\n");
    printf("Enter the value of a :  ");
    scanf("%f", &a);
    printf("Enter the value of b :  ");
    scanf("%f", &b);
    printf("Enter the value of c :  ");
    scanf("%f", &c);
    d = (b * b) - (4 * a * c);
    
    x1 = ((-b) + sqrt(d)) / (2 * a);
    x2 = ((-b) - sqrt(d)) / (2 * a);

    printf("Checking if the roots are real or imaginary ?\n");
    printf("Checking.............\n");

    if (d > 0)
    {
        printf("Roots are real and different.\n");
        printf("Root1 is %.2f\n", x1);
        printf("Root2 is %.2f\n", x2);
    }
    else if (d == 0)
    {
        printf("Roots are real and equal\n");
        printf("Root1 is %.2f\n", x1);
        printf("Root2 is %.2f\n", x2);
    }
    else
    {
        printf("Roots are Imaginary.\n Sorry, We can't calculate further.\n");
    }

    printf("Thanks for using this Program.\n");

    printf("\n");
    printf("\t\t\tMADE BY SHARAD\n");
    printf("\n");
    printf("\n");

    return 0;
}