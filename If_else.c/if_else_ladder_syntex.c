//#include<stdio.h>
//
//main()
//{
//    if(conditon)
//    {
//        ("true_block_statement");
//    }
//    else
//    {
//        ("else or false block statement");
//    }
//    after if_else statement ,,it will be executed in any conditon
//}

#include<stdio.h>
int main()
{
    int i = 20;
  
    // Check if i is 10
    if (i == 10)
        printf("i is 10");
  
    // Since i is not 10
    // Check if i is 15
    else if (i == 15)
        printf("i is 15");
  
    // Since i is not 15
    // Check if i is 20
    else if (i == 20)
        printf("i is 20");
  
    // If none of the above conditions is true
    // Then execute the else statement
    else
        printf("your assigned %d to to i and is not present",i);
  
    return 0;
}