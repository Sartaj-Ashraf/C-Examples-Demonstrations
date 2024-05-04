#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    float surf_area;
    float length,width,height;
    printf("Enter length :: ");
    scanf("%f",&length);

    printf("Enter width :: ");
    scanf("%f",&width);

    printf("Enter height :: ");
    scanf("%f",&height);

    surf_area=2 * (length * width+ width * height + height * length);
    printf("surface area =%f",surf_area );
}