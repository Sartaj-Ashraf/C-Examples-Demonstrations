// Relational Operators

// These operators are used to compare two values and returns zero (as FALSE) or non zero (as TRUE) values.

// Relational operators are,

// ==		Equal To
// <		Lest Than
// >		Greater Than
// <=		Less or Equal To
// >=		Greater or Equal to
// !=		Not Equal To
// Consider the example,

// Relational operator precedence:
// <     ;
// >     ;
// <=    ;
// >=    ;
// ==    ;
// !=    ;

// Example Number 1 :
// #include<stdio.h>
// int main()
//  int a=18,b=9;
//  printf("%d",a<b);
//  output =0
//  the value will be false cuz a is not less than b,

// 0 is false and 1 is true in computer ;

// Example Number 2 :
// #include<stdio.h>
// int main(){
//  int a=18,b=90;
//  printf("%d",a<b);
//  output =0
//  the value will be ture means (1) cuz a is  less than b,

// }

#include <stdio.h>

int main()
{
    int num1, num2;

    num1 = 10;
    num2 = 3;

    if (num1 == num2)
        printf("\n%d and %d are Equal.", num1, num2);
    else
        printf("\n%d and %d are not Equal.", num1, num2);

    if (num1 != num2)
        printf("\n%d is not equal to %d.", num1, num2);
    else
        printf("\n%d is  equal to %d.", num1, num2);

    if (num1 < num2)
        printf("\n%d is less than %d.", num1, num2);
    else
        printf("\n%d is not less than %d.", num1, num2);

    if (num1 > num2)
        printf("\n%d is greater than %d.", num1, num2);
    else
        printf("\n%d is not greater than %d.", num1, num2);

    if (num1 <= num2)
        printf("\n%d is less than or equal to %d.", num1, num2);
    else
        printf("\n%d is not less than or equal to %d.", num1, num2);

    if (num1 >= num2)
        printf("\n%d is greater than or equal to %d.", num1, num2);
    else
        printf("\n%d is not greater than or equal to %d.", num1, num2);

    return 0;
}
// Output:

// 10 and 3 are not Equal.
// 10 is not equal to 3.
// 10 is not less than 3.
// 10 is greater than 3.
// 10 is not less than or equal to 3.
// 10 is greater than or equal to 3.

// elobration
// #include<stdio.h>
// int main()
//  {

//  int a=18,b=9,c,d,e=10;
//  c=b++;
//  d=b;

//  printf("%d", a+c==b>e<c+d);
//               27==10>10<19
//               27==1
//               hence its not true so it will give 0
// }
