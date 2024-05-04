#include <stdio.h>

main() 
{
    float area, base, height;

    printf("enter the value of base\n");
    scanf(" %f", &base);

    printf("enter the value of height\n");
    scanf(" %f", &height);

    area = (base * height) / 2;
    printf("\nArea of Triangle is: %f", area);
}
