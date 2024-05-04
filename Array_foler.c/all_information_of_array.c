#include <stdio.h>

int main()
{
    int a[5], i;
    printf("enter the numebr of your array\n ");  give a user an option to enter the value of your numbers 
    for (i = 0; i < 5; i++)                       check the condition of the user input
    {
        scanf("%d", &a[i]);                       store the data of the user and check the above conditons    
    }
    for (i = 0; i < 5; i++)                       use this loop to print the value of the number  acessing the
                                                 elemnts that are stored in i
    {
        printf("array element at index %d is asigned to %d \n", i, a[i]);     here %d--> i   ,,, %d---> a[i]
    }
    for (i = 4; i >= 0; i--)   -------> same loop in the reverse order using decrement sign i=i-1 ,,,i--
    {
        printf("\n array element at index %d is asigned to %d \n", i, a[i]);
    }   
}