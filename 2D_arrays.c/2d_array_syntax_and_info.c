#include <stdio.h>

main()
{
   // For compile time intializing
    int a[2][3], i, j;               // This the allocation of the 2d array and the i and j variable 

        printf("Enter the elements of the array");  // This is to give a user an inteface to tell him what to do;

     for ( i = 0; i < 2; i++)         //This is the for loop for the 'i' variable while 'i' is the 'ROW' ;
                                      //and count is size of 2 means that array is of size 2;
    {
        for (j = 0; j < 3; j++)      //This is the for loop for the 'j' variable while 'j' is the 'coloumn' 
                                      //and count is size of 3 means that array is of size 3;
        {
            scanf("%d", &a[i][j]);
                                      //This is to take the input from the user and indexes will be form '0' ;
        }
    } 
    For Printing purpose
    printf(" The elements are as");     //This is to give user an interface to check the number given by user;
       
      for ( i = 0; i < 2; i++)       // Now this forloop is to access and print the 'i' values ;
      {
        for (j = 0; j < 3; j++)       //Now this forloop is to access and print the 'j' values ;

        {
            printf("%d", a[i][j]);   // While a[i] and a[j] are the variable storing data   ;
        }
      }

}












