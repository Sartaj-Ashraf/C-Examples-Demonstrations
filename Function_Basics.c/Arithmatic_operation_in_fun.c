#include <stdio.h>

void add(); // function declaration

int main()
{
    add(); // function call
    return 0;
}

void add() // function definition
{
    int i, j, sum;
    printf("Enter 2 numbers that you want to add\n");
    scanf("%d %d", &i, &j);
    sum = i + j;
    printf(" The add of %d  and %d = %d\n", i, j, sum);
}

