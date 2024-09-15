/*Write a program to add an 8% sales tax to a given amount and round the result to the nearset penny. */

#include <stdio.h>

int main()
{
    float a;
    printf("This program can add  sales tax to a given amount and round the result to the nearset penny.\n ");

    printf("Enter the amount : $  ");
    scanf("%f", &a);
    printf("\n");

    printf("Sales tax : $%.2f \n", a * 0.08);
    printf("Total : $%.2f ", a + (a * 0.08));

    printf("\n");
    printf("\t\t\tMADE BY SHARAD\n");
    printf("\n");
    printf("\n");

    return 0;
}