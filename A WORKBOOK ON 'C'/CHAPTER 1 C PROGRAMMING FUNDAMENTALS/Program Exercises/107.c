/*Write a program which takes as principal amount, rate of interest and time duration from the user and calculates the simple ineterst and compund interest (as per the choice input by the user) along with the total amount.  */

#include <stdio.h>
#include <math.h>

int main()
{

    float p, r, t, n;
    double CI, SI;
    printf("This Program can Calculate the SIMPLE INTEREST and COMPOUND INTEREST.\n ");

    printf("Enter the value of Principal Amount : ");
    scanf("%f", &p);
    printf("Enter the value of Rate of Interest : ");
    scanf("%f", &r);
    printf("Enter the value of Time Duration(years) : ");
    scanf("%f", &t);
    printf("Enter the value of no of time interest applied : ");
    scanf("%f", &n);
    printf("\n");

    SI = (p * r * t) / 100;
    printf("SIMPLE INTEREST IS %.2lf\n", SI);
    printf("Total amount %.2lf\n", SI + p);

    CI = p * pow((1 + (r / n)), (n * t));
    printf("COMPOUND INTEREST IS %.2lf\n", CI);
    printf("Total amount %.2lf\n", CI + p);

    printf("\n");
    printf("\t\t\tMADE BY SHARAD\n");
    printf("\n");
    printf("\n");

    return 0;
}
