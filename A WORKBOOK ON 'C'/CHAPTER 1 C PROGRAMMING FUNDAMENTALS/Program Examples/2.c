/* Find the area of triangle based on the base and height values. */
#include <stdio.h>

int main()
{
    float b, h, area;
    printf("This Program can find the area of triangle.\n");
    printf("Enter base of triangle :  ");
    scanf("%f", &b);
    printf("Enter height of triangle :  ");
    scanf("%f", &h);
    area = (b * h) / 2;
    printf("The Area of Triangle is %.2f ", area);
    printf("\n");
    printf("MADE BY SHARAD\n");
    printf("\n");
    
    return 0;
}
