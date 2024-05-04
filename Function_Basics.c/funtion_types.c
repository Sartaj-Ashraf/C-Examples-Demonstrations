There can be 4 different types of user-defined functions, they are:

Function with no arguments and no return value
Function with no arguments and a return value
Function with arguments and no return value
Function with arguments and a return value

Take Nothing    Ruturn Nothing         ADD
Take Nothing    Return Somthing        MULTI
Take Somthing   Return nothing         SUB
Take Somthing   Return Somthing        DIV

TN RN 
TN RS 
TS RN 
TS RS


Function with no arguments and no return value

#include<stdio.h>

void add();       // function declaration

int main()
{
    add();        // function call
    return 0;
}

void add()        // function definition
{
    int i, j,sum;
    printf("Enter 2 numbers that you want to add\n");
    scanf("%d %d", &i, &j);
    sum= i+j;
    printf(" The add of %d  and %d = %d\n",i,j,sum);
    
    }



Function with no arguments and a return value:

#include<stdio.h>

int sub();       // function declaration

int main()
{
    int result;
    result = subtract();        // function call
    printf("the subtaction is %d", sub);
    return 0;
}

int greatNum()        // function definition
{
    int i, j, sub;
    printf("Enter 2 numbers that you subtract...");
    scanf("%d%d", &i, &j);
    sub=i-j;
    }


    Function with arguments and no return value

    #include<stdio.h>

void greatNum(int a, int b);       // function declaration

int main()
{
    int i, j;
    printf("Enter 2 numbers that you want to compare...");
    scanf("%d%d", &i, &j);
    greatNum(i, j);        // function call
    return 0;
}

void greatNum(int x, int y)        // function definition
{
    if(x > y) {
        printf("The greater number is: %d", x);
    }
    else {
        printf("The greater number is: %d", y);
    }
}

Function with arguments and a return value

#include<stdio.h>

int greatNum(int a, int b);       // function declaration

int main()
{
    int i, j, result;
    printf("Enter 2 numbers that you want to compare...");
    scanf("%d%d", &i, &j);
    result = greatNum(i, j); // function call
    printf("The greater number is: %d", result);
    return 0;
}

int greatNum(int x, int y)        // function definition
{
    if(x > y) {
        return x;
    }
    else {
        return y;
    }
}



