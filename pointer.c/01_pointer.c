#include<stdio.h>

int main()
{
    int i=20; int *j;
     j =&i;
    printf("The value of i is   %d \n", i);
    printf("The value of j is   %d \n", *j);
    printf("The address of i is %u \n", &i);
    printf("The address of i is %u \n", j);
    printf("The address of j is %u \n", &j);

}
// Out Put:
// The value of i is   20
// The value of j is   20
// The address of i is 6684236
// The address of j is 6684236
// The address of j is 6684224
