#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j)
        }
        printf("\n");
    }

}
OUTPUT:

Enter the number of lines : 5

1
12
123
1234
12345
