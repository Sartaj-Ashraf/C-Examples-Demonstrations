#include <stdio.h>
add()
{
    int a, b, c;
    printf("Enter the value of A and B For addition\n");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("Sum= %d", c);
}

multi()
{
    int a, b, c;
    printf("Enter the value of A and B for multiplication\n");
    scanf("%d %d", &a, &b);
    c = a * b;
    printf("Product= %d", c);
}

sub()
{
    int a, b, c;
    printf("Enter the value of A and B for subtraction\n");
    scanf("%d %d", &a, &b);
    c = a - b;
    printf("Difference=%d", c);
}

div()
{
    int a, b, c;
    printf("Enter the value of A and B for subtraction get coefficient\n");
    scanf("%d %d", &a, &b);
    c = a / b;
    printf("coefficient= %d", c);
}

mod()
{
    int a, b, c;
    printf("Enter the value of A and B for subtraction to get reminder\n");
    scanf("%d %d", &a, &b);
    c = a % b;
    printf("Reminder=%d", c);
}
int main()
{
    add();
    printf("\n");
    sub();
    printf("\n");
    multi();
    printf("\n");
    div();
    printf("\n");
    mod();

    
}