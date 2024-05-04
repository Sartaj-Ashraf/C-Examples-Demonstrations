#include <stdio.h>
add()
{
    int a, b, c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter scond number : ");
    scanf("%d", &b);
    c = a + b;
    printf("%d+%d=%d\n", a, b, c);
}

sub()
{
    int a, b, c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter scond number : ");
    scanf("%d", &b);
    c = a - b;
    printf("%d-%d=%d\n", a, b, c);
}

div()
{
    int a, b, c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter scond number : ");
    scanf("%d", &b);
    c = a / b;
    printf("%d/%d=%d\n", a, b, c);
}
int main()
{
    char operate;
    printf("Which operator you want to use  ");
    scanf("%c", &operate);

    switch (operate)
    {
    case '+':
        add();
        break;
    case '-':
        sub();
        break;
    case '/':
        div();
        break;
    }
}