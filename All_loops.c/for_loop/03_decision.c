#include <stdio.h>
void main()

{
    char name;
    int age;

//   printf("enter your name\n");
//   scanf("%c", &name);

    printf("enter your age\n");
    scanf("%d", &age);
    

    if (age >= 18 && age<=30)
    {
        printf("YOU CAN ACCESS THIS SITE\n", age);
    }
    else
    {
        printf("YOU CAN'T ACCES THIS SITE\n", age);
    }
}