/*Find the average %age marks of a student based on four subject marks. Assume maximun marks of each subjects is 100 */

#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 100
int main()
{
    int m1, m2, m3, m4, m5;
    float average;
    char name[MAX_NAME_LENGTH];

    printf("This Program can calculate the average marks of a student\n");
    printf("Enter Student's Name :  ");
    scanf("%s", &name);
    printf("Hello , %s\n", name);

    printf("Enter Marks of subject1 :  ");
    scanf("%f", &m1);
    printf("Enter Marks of subject2 :  ");
    scanf("%f", &m2);
    printf("Enter Marks of subject3 :  ");
    scanf("%f", &m3);
    printf("Enter Marks of subject4 :  ");
    scanf("%f", &m4);
    printf("Enter Marks of subject5 :  ");
    scanf("%f", &m5);

    average = (m1 + m2 + m3 + m4 + m5) / 5;

    printf("The Percentage average marks of %s is %.2f\n", name, average);
    printf("\n");
    printf("MADE BY SHARAD\n");
    printf("\n");
    return 0;
}
