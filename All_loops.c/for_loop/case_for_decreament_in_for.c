#include <stdio.h>

int main()
{
    int i;
    for (i = 5; i ; i--)
    {

        printf(" %d", i);
    }
}
// This forloop will keep running utill the value becomes 0 but this will not print 0
//  how it will be excuted
//      1--------> i will be initialized to 5 ;...       meanig the compiler will the varable value of i as 5
//      2--------> the condition 'i' will be tested;     is it zero or non zero...any non zero value is true 
//      3--------> the code is excuted;
//      4--------> then i will be decremented by 1.;
//      5-------->condition  i is checked and code is excuted if its non zero value
//      6--------> so the cycle will be running untill the value of i becums zero;