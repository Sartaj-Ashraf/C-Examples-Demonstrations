#include <stdio.h>

main()
{
    int a, b, sum, sub, multi, dev;
    char oprato;
    printf("enter operator ");
    scanf("%c", &oprato);
    printf(" enter the two nubers");
    scanf("%d %d ", &a, &b);

    switch (oprato)
    {
    case '+':
        sum = a + b;
        printf(" sum = %d", sum);
        break;

    case '-':
        sum = a - b;
        printf(" sub = %d", sub);
        break;

    case '*':
        multi = a * b;
        printf(" multi = %d", multi);
        break;

    case '/':
        dev = a / b;
        printf(" dev = %d", dev);
        break;
    default:
        printf("enter valid operator");
    }
}