/*A student is recquired to study five subjects per term. Write a program to find the average marks of students in a term and average percentage of three terms. */

#include <stdio.h>
#define MAX_NAME_LENGTH 100
#include <ctype.h>
int main()
{
    char n[MAX_NAME_LENGTH];
    int s1t1, s2t1, s3t1, s4t1, s5t1, s1t2, s2t2, s3t2, s4t2, s5t2, s1t3, s2t3, s3t3, s4t3, s5t3;
    float avgt1, avgt2, avgt3;
    printf("\n");
    printf("\t\tResult Calculator of a Student.\n");
    printf("Enter Name of the Student :  ");
    scanf("%s", &n);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\tRESULT REPORT OF %s\n", n);

    printf("\n");
    printf("\n");

    printf("Enter the marks of subject1 in TERM1 :  ");
    scanf("%d", &s1t1);
    printf("Enter the marks of subject2 in TERM1 :  ");
    scanf("%d", &s2t1);
    printf("Enter the marks of subject3 in TERM1 :  ");
    scanf("%d", &s3t1);
    printf("Enter the marks of subject4 in TERM1 :  ");
    scanf("%d", &s4t1);
    printf("Enter the marks of subject5 in TERM1 :  ");
    scanf("%d", &s5t1);

    avgt1 = (s1t1 + s2t1 + s3t1 + s4t1 + s5t1) / 5.0;
    printf("\n");
    printf("Average of Term1 is %.2f\n", avgt1);
    printf("\n");

    printf("Enter the marks of subject1 in TERM2 :  ");
    scanf("%d", &s1t2);
    printf("Enter the marks of subject2 in TERM2 :  ");
    scanf("%d", &s2t2);
    printf("Enter the marks of subject3 in TERM2 :  ");
    scanf("%d", &s3t2);
    printf("Enter the marks of subject4 in TERM2 :  ");
    scanf("%d", &s4t2);
    printf("Enter the marks of subject5 in TERM2 :  ");
    scanf("%d", &s5t2);

    avgt2 = (s2t2 + s2t2 + s3t2 + s4t2 + s5t2) / 5.0;
    printf("\n");
    printf("Average of Term2 is %.2f\n", avgt2);
    printf("\n");

    printf("Enter the marks of subject1 in TERM3 :  ");
    scanf("%d", &s1t3);
    printf("Enter the marks of subject2 in TERM3 :  ");
    scanf("%d", &s2t3);
    printf("Enter the marks of subject3 in TERM3 :  ");
    scanf("%d", &s3t3);
    printf("Enter the marks of subject4 in TERM3 :  ");
    scanf("%d", &s4t3);
    printf("Enter the marks of subject5 in TERM3 :  ");
    scanf("%d", &s5t3);

    avgt3 = (s3t3 + s2t3 + s3t3 + s4t3 + s5t3) / 5.0;
    printf("\n");
    printf("Average of Term3 is %.2f\n", avgt3);
    printf("\n");
    printf("\n");

    printf("Average of TERM1,TERM2,TERM3 is  %.2f ", (avgt1 + avgt2 + avgt3) / 3);

    printf("\n");
    printf("\n");
    printf("\t\t\tMADE BY SHARAD\n");
    printf("\n");
    printf("\n");

    return 0;
}
