// Logical Operators

// The operators are used to check more than one condition whether they are true or not. It is very useful when you have multiple conditions and want to make decisions based on their conditions.

// Logical operators are,

// &&(Logical AND)
// Returns TRUE (1), when all conditions are TRUE.

// ||(Logical OR)	
// Returns TRUE (1), when at least one condition is TRUE.

// !(Logical NOT)
// Return TRUE (1) if condition is FALSE(0) 
// and returns FALSE (0) if condition is TRUE (1)
// Consider the example,

#include <stdio.h>

int main()
{
    int val = 10;

    if ((val >= 10) && (val <= 20))
        printf("\nTRUE-1");
    else
        printf("\nFALSE-1");

    if ((val >= 10) || (val <= 20))
        printf("\nTRUE-2");
    else
        printf("\nFALSE-2");

    if (!(val >= 10))
        printf("\nTRUE-3");
    else
        printf("\nFALSE-3");
    
    return 0;
}
Output

// TRUE-1
// TRUE-2
// FALSE-3