/* The length of a rod (in meters ) is input through the keyboard. Write a program to convert and print the length in feet, inches, and centimeters. */

#include <stdio.h>

int main()
{
    float l;
    printf("Length Converter.\n");
    printf("Enter the length of the rod :  ");
    scanf("%f", &l);
    printf("The length of the rod in meter is %.2f\n", l);
    printf("The length of the rod in feet is %.2f\n", l * 3.28);
    printf("The length of the rod in inches is %.2f\n", l * 39.37);
    printf("The length of the rod in centimeters is %.2f\n", l * 100);

    printf("\n");
    printf("\t\t\tMADE BY SHARAD\n");
    printf("\n");
    printf("\n");

    return 0;
}