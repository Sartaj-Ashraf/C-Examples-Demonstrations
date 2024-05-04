Precendence Of All Operators ::                  Name                                             Associativity
() . -> ++ --                  ----->                                                                 L--> R
++ -- + = ! ~ * & sizeof(type) ----->       These are urinary oprators ,,Need of only one operand     R--> L
*/%                            ----->       Arithmatic                                                L--> R
+-                             ----->       Arithmatic                                                L--> R
<< >>                          ----->       Bitwise left and right shift                              L--> R
< <= > >=                      ----->       Relational oprators                                       L--> R
== !=                          ----->       Equality and not equality                                 L--> R
&                              + ----->       Bitwise AND                                               L--> R
^                              ----->       Bitwise Xor                                               L--> R 
|                              ----->       Bitwise Or                                                L--> R
&&                             ----->       Logical AND                                               L--> R
||                             ----->       Logical OR                                                L--> R
 ? :                           ----->       Conditional Operator  TERNARY                             R--> L
=, +=, -=, /=, *= ,^= ,<<= , >>=   ----->     Asignment Operators                                     R--> L 
,                                  ----->   



Relational Operators

#include<stdio.h>

main()
{
    int a =4, b=6, result;
    result=a<b && printf("sartaj") || printf(" ashraf");
    printf(" result"  );

    logical precendence;
    1st	   !
    2nd	   *,/,%
    3rd    +,-
    4th    <>,<=,>=
    5th	   ==,!=
    6th	   &&
    7th    ||
    8th    =

#include<stdio.h>
int main()
{
 int x=2; 
 int y=3;
 printf("the value of 8*y/2*x is  %d  ", 8*y/2*x );
}

Example 
a= 3*4%5/2    first the multiple operators will be terminated
12 % 5/2      Then the mod will be terminated 
2  /2   =1    And then the devide will be terminated
              The operators are of same priority and hence the associativity will 
              will be checked and these operators will use (left to right) associativity


LOGICAL OPERATORS

Use of logical operators:
1. && (AND) is true when both the conditions are true

    “1 and 0” is evaluated as false

    “0 and 0” is evaluated as false

    “1 and 1” is evaluated as true

2. || (OR) is true when at least one of the conditions is true. (1 or 0 = 1)(1 or 1 = 1)

3. ! returns true if given false and false if given true.



    Logical Operators 
&&, ||, and ! are the three logical operators in C.
 These are read as “and,””or,” and “not.” They are used to provide logic to our c programs.

    && (and) operator if one is false it will not go to the next term; and will print 0
    0 0 0= false 
    0 1 0= false 
    1 1 1 = true

    ||  (or) operator if one is ture it will give one (true);
     0 0 0= false 
     0 1 0= true
     1 1 1 =true
   
   example>
      int a=10,b=5;
      a>b || b==4
      so here one value is ture then the final output will be true that one 


    !  not oprator
    !(3==3) evaluates to false

    !(3>30) evaluates to true




// Oprator precedence it that how will the complier deal with the oprators like bodmass in basic mathamatics;
// But here no longer BODMAS   applies .....
// The oprator precedance is as ,,,
// *  /  %   -----> Are on first priority
// + -       -----> Are on scond priority
// =         -----> It is on last priority

// ,,when there are same operators in a alogorithm the tie is excuted,,
// *  /  in this left to right priority is taken.