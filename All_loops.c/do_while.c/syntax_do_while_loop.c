#include <stdio.h>

int main()
{
    int i;   /* give the program some storage varilable*/
    int n;
    printf(" enter the value of number  n  \n ");  /* ask user where from you want to get your numbers printed*/
     scanf("%d", &n);                              /* the user will enter the number by this function that will/*
                                                    /*store in the variable n */
     
     
       printf(" the number are  \n ");                /*after that print  your numbers are as*/
   
   
    do                         /*  this is the syntax  of do_while loop ,,it will definitly print first the do*/ 
    {                          /*  condition and then checks the while condition*/
        printf("%d\n", i);       
        i++;
    } while( i<=n);
}
  
  
//   syntax look
// do
// {
//     /* code */
// } while (/* condition */);
