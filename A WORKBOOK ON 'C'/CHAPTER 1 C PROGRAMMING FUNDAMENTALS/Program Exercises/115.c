/*Write a program to input time in seconds and convert them to hours ,minutes , and seconds, and display then in proper format. */
#include <stdio.h>
int main()
{
    int input_seconds, hours, minutes, seconds;
    printf("Time Converter.\n");
    printf("Enter the value of Time :    ");
    scanf("%d", &input_seconds);
    // IMPORTANT CONCEPT
    hours = (input_seconds / 3600);
    minutes = (input_seconds % 3600) / 60;
    seconds = (input_seconds % 60);

    printf("HH:MM:SS is %02d:%02d:%02d", hours, minutes, seconds);

    printf("\n");
    printf("\t\t\tMADE BY SHARAD\n");
    printf("\n");
    printf("\n");

    return 0;
}