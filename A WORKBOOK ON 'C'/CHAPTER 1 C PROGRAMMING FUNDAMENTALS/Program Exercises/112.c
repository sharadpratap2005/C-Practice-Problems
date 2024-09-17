/* Write a program to find the maximum of three integers numbers usjing conditional operators */
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("This Program can generate the greatest number.\n");
    printf("Enter the value of a :  ");
    scanf("%d", &a);
    printf("Enter the value of b :  ");
    scanf("%d", &b);
    printf("Enter the value of c :  ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a is the greatest.\n");
    }
    else if (b > a && b > c)
    {
        printf("b is the greatest.\n");
    }
    else if (c > a && c > b)
    {
        printf("c is the greatest.\n");
    }
    else
    {
        printf("PLease, Check the numbers again..!");
    };

    printf("\n");
    printf("\t\t\tMADE BY SHARAD\n");
    printf("\n");
    printf("\n");

    return 0;
}