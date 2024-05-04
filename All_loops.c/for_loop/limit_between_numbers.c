#include <stdio.h>
int main()
{

    // if (/* condition */)
    // {
    //     /* code */
    // }

    int age;

    printf("enter your age");
    scanf("%d", age);
    if 
        (age <=18 && age >= 40)
    {
        printf(" you can drive safely %d", age);
    }

    else
    {
        printf("you cannot drive ,you are under/above aged %d" , age);
    }
}