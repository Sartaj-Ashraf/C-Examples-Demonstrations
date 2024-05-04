#include<stdio.h>
int main()
{
    int n;
    printf("Enter your numebr  :");
    scanf("%d",&n);
         if(n%3==0 && n%11==0)
         {
             printf("\nYour number is divisible by 3 and 11");
         }
		 else
         { 
            printf("Your number is not divisible by 3 or 11");
         }

}