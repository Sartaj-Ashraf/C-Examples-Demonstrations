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
    return 0;
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
    return 0;
}

multi()
{
    int a, b, c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter scond number : ");
    scanf("%d", &b);
    c = a * b;
    printf("%d*%d=%d\n", a, b, c);
    return 0;
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
    return 0;
}
int main()
{
    char operate;
    printf("To perform an Aritmatic Operation\nYou can choose these operators (+ - /) \nWhich operator you want to use:  \n ");
    scanf("%c", &operate);
     if(operate== '+')
     {
         add();
     }
     else if(operate == '-')
     {
     	sub();
     	
	 }
	 else if (operate == '/')
	 {
	 	div();
	 }
     else if (operate == '*')
	 {
	 	multi();
	 }
	 else
	 {
	 	printf("%c ",operate);
	 	printf("Please enter a valid Arithmatic Operator");
	 	
	 }
	 
}