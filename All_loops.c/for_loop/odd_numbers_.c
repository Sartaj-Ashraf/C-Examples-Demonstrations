#include <stdio.h>
int main()
{


    // if (/* condition */)
    // {
    //     /* code */
    // }
    
    int a;
    printf("the  odd number between 1 and 20 are :");
    for (a = 10; a <= 20; a++)
    {
    
        if (a % 2 != 0)
        {
            printf("%d ", a);
        }
    }
}