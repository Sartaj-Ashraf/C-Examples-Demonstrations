//Calculate area and circumference of a circle using functions
#include<stdio.h>
float PI = 3.14;

float area(float radius);

float circum(float radius);

 main() 
{
 float radius;
 printf("Enter radius: ");
 scanf("%f", &radius);
 printf("Area : %f\n", area(radius));
 printf("Circumference: %f\n", circum(radius));
}
/* return area of a circle */
float area(float radius) 
{
  return PI * radius * radius;
}
/* return circumference of a circle */
float circum(float radius) 
{
  return 2 * PI * radius;
}

