#include <stdio.h>

int main()
{
    int i;
    int n;
    printf(" enter the value of number  n  \n ");
    scanf("%d", &n);

    printf(" the number are  \n ");
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);
}
