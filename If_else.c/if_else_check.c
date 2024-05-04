

// program to find the wheather a number is negative positiver or zero:
#include<stdio.h>

int main()
{
    int n;
    printf("Enter any number  : ");
    scanf("%d",&n);

        if(n>0)
    {
      printf(" You number is positive integer.");

    }
    else
        if(n==0)
    {
        printf(" Your number is zero.");
    }
    else{
        printf("Your number is negative integer.");
    }
}