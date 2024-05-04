#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int surf_area;
    int side;
    printf("Enter the value of side :: ");
    scanf("%d",&side);
    printf("Surface area of your cube is : ");
    surf_area=6*(side*side);
    printf("%d",surf_area);

}