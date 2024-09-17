/*Write a program to multiply a given number by 2 without using arithmetic operators. */
#include <stdio.h>

int main()
{
    int num, result;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Multiply the number by 2 using left shift operator
    result = num << 1;

    // Output the result
    printf("The result of multiplying %d by 2 is: %d\n", num, result);

    return 0;
}

// Left shift operator    num << n  , num * (2^n);
// Right shift operator  num >> n   , num / (2^n);
