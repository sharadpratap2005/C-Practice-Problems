/*Input two floating point numbers and print the sum of their squares in the follwoing format.The sum value should be displayed up to two decimal palces. Keep alignment of output as given in the format.
Square of the first number is     2.25
Square of the second number is   25.00
                        Total    27.25*/

#include <stdio.h>

int main()
{
    float a,b,c,d, total;

    printf("Enter the first number:  ");
    scanf("%f", &a);
    printf("Square of the first number is   %.2f \n", c = a * a);

    printf("Enter the second number:  ");
    scanf("%f", &b);
    printf("Square of the second number is   %.2f \n", d = b * b);

    printf("\t\t\tTotal\t%.2f\n" , c + d);

     printf("\n");
    printf("MADE BY SHARAD\n");
    printf("\n");
    return 0;
    


}
