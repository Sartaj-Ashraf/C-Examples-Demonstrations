#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",64+j);
        }
        printf("\n");
    }

}