#include <stdio.h>
 
int main()
{
   int x, y, *a, *b, c;
 
   printf("Enter x and y\n");
   scanf("%d%d", &x, &y);
 
   printf("Before Swapping x = %dy = %d", x, y);
 
   a = &x;
   b = &y;
   c = *b;
   *b = *a;
   *a = c;
    printf("After Swapping x = %d y = %d", x, y);
}
