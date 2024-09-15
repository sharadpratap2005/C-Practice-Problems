
/* Basic Calculator

Write a program that performs basic arithmetic operations (addition, subtraction, multiplication, division) based on user input. */



#include <stdio.h>

int main()
{
    // BASIC CALCULATOR
        printf("\n");
    printf("\n");
    printf("\n");

    printf("\t\t\tMADE BY SHARAD PRATAP\n");
    printf("\n");
    printf("This Program can do  Arithmetic Operations.\n");
    printf("ADDITION , SUBTRACTION , MULTIPLICATION , DIVISION.\n");

    // DECLARING VARIABLES
    int a, b, result;
    char operator;
    char reply;

    // PROGRAMMING THE CALCULATOR
    printf("Enter the First Number 'a' : ");
    scanf("%d", &a);

    printf("Enter Operator ( + , - , * , /) : ");
    scanf(" %c", &operator);

    printf("Enter the Second Number 'b' : ");
    scanf("%d", &b);

    switch (operator)
    {
    case '+':
        result = a + b;
        printf("The Sum of a and b is %d\n", result);
        printf("Therefore Your Result is %d\n", result);
        break;
    case '-':
        result = a - b;
        printf("The Subtraction of a and b is %d\n", result);
        printf("Therefore Your Result is %d\n", result);
        break;
    case '*':
        result = a * b;
        printf("The Multiplication of a and b is %d\n", result);
        printf("Therefore Your Result is %d\n", result);

        break;
    case '/':
        result = a / b;
        printf("The Division of a and b is %d\n", result);
        printf("Therefore Your Result is %d\n", result);

        break;
    default:
        printf("INVALID OPEARTOR..!\n");
        printf("Please , Choose the correct Mathematical Operator\n");
    }
    printf("Do you want to do further Calculation with your result [Y/N]\n");
    scanf(" %c", &reply);

    if (reply == 'Y' || reply == 'y')
    {
        printf("Enter the Next Number : ");
        scanf("%d", &a);
        printf("Enter Operator : ");
        scanf(" %c", &operator);

        switch (operator)
        {
        case '+':
            result = result + a;
            printf("The New Result is %d", result);
            break;
        case '-':
            result = result - a;
            printf("The New Result  is %d", result);
            break;
        case '*':
            result = result * a;
            printf("The New Result is %d", result);

            break;
        case '/':
            result = result / a;
            printf("The New Result is %d", result);

            break;
        default:
            printf("INVALID OPEARTOR..!\n");
            printf("Please , Choose the correct Mathematical Operator\n");
        }
    }
    else
    {
        printf("Thanks for using the Programe Made by Sharad Pratap\n");
    }

    printf("\n");
    printf("Do you want to do further Calculation with your result [Y/N]\n");
    scanf(" %c", &reply);

    if (reply == 'y' || reply == 'Y')
    {
        printf("Sorry , For the Inconvenience Sharad is Working on it to Increase the No of Calculations.\n ");
    }
    else
    {
        printf("Thanks for using the programe made by Sharad Pratap.\n");
    }


    printf("Good Luck..! ");

    return 0;
}



