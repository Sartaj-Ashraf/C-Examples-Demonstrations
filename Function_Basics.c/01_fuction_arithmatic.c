#include <stdio.h>

void add()
{
    int a, b, c;
    printf("Enter the value of A and B For addition\n");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("Sum= %d", c);
}

void multi()
{
    int a, b, c;
    printf("Enter the value of A and B for multiplication\n");
    scanf("%d %d", &a, &b);
    c = a * b;
    printf("product= %d", c);
}

void sub()
{
    int a, b, c;
    printf("Enter the value of A and B for subtraction\n");
    scanf("%d %d", &a, &b);
    c = a - b;
    printf("Difference=%d", c);
}

void div()
{
    int a, b, c;
    printf("Enter the value of A and B get coefficient\n");
    scanf("%d %d", &a, &b);
    c = a / b;
    printf("coefficient= %d", c);
}

void mod()
{
    int a, b, c;
    printf("Enter the value of A and B to get reminder\n");
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




// #include <stdio.h>
// add()
// {
//     int a, b, c;
//     printf("Enter the value of A and B For addition");
//     scanf("%d %d", &a, &b);
//     c = a + b;
//     printf("%d", c);
//     return 0;
// }

// multi()
// {
//     int a, b, c;
//     printf("Enter the value of A and B for multiplication");
//     scanf("%d %d", &a, &b);
//     c = a * b;
//     printf("%d", c);
//     return 0;
// }

// sub()
// {
//     int a, b, c;
//     printf("Enter the value of A and B for subtraction");
//     scanf("%d %d", &a, &b);
//     c = a - b;
//     printf("%d", c);
//     return 0;
// }

// div()
// {
//     int a, b, c;
//     printf("Enter the value of A and B for subtraction get queofficent");
//     scanf("%d %d", &a, &b);
//     c = a / b;
//     printf("%d", c);
//     return 0;
// }

// mod()
// {
//     int a, b, c;
//     printf("Enter the value of A and B for subtraction to get reminder");
//     scanf("%d %d", &a, &b);
//     c = a % b;
//     printf("%d", c);
//     return 0;
// }
// int main()
// {
//     add();
//     printf("\n");
//     sub();
//     printf("\n");
//     multi();
//     printf("\n");
//     div();
//     printf("\n");
//     mod();
//     return 0;
// }