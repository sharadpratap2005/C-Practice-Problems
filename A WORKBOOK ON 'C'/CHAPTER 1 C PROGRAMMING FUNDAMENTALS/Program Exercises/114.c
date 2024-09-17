/* Write a program to illustarte the use of formatted specifier by using formatted sacnf() and printf() functions */

#include <stdio.h>
#define MAX_NAME_LENGTH 100
int main()
{
    char a[MAX_NAME_LENGTH];
    printf("Enter your Name :  ");
    scanf("%s", &a);
    printf("Hello , %s", a);

    printf("\n");
    printf("\t\t\tMADE BY SHARAD\n");
    printf("\n");
    printf("\n");

    return 0;
}