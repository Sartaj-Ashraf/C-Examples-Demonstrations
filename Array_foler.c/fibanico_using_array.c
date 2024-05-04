/* Program to calculate the first 20 Fibonacci numbers. */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{

        int i, n, a = 0, b = 1, term; //fibonacci[ 20 ];
        printf("Enter the nth term");
        scanf("%d", &n);
        printf("%d %d", a, b);
        for (i = 2; i < n; i++)
        {

                term = a + b;
                printf("%d\n", term);
                a = b;
                b = term;
        }
}
/* End of sample program to calculate Fibonacci numbers */