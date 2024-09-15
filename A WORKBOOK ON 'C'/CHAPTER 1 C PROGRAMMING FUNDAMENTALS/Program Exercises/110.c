/*Wite a program in a file called "circle.c" which reads a real number (choose between float,double,or long double ) representing the radius of a circle. THe program will then find the area as well as the circumference of the circle using the following formulae:
area = πr2  and circumference = 2πr. use π = 3.14 */

#include <stdio.h>

int main()
{
    float r;
    printf("This Program can calculate the Area and Circumference of Circle.\n");
    printf("Enter the Radius of circle :  ");
    scanf("%f", &r);
    printf("The Area of circle is %.2f\n", 3.14 * r * r);
    printf("The Circumference of circle is %.2f\n", 3.14 * 2 * r);

    printf("\n");
    printf("\t\t\tMADE BY SHARAD\n");
    printf("\n");
    printf("\n");

    return 0;
}