#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int arr[100];
    int i,j,k;
     int num;
    printf("Enter the size of your array\n") ;
    scanf("%d",& num);
    printf("Enter your array elements\n");
    for ( i = 0; i < num; i++)
    {
       scanf("%d",&arr[i]);
    }
     for ( i = 0; i < num; i++)
    {
       printf("%d",arr[i]);
    }
    
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<num;k++)
                {
                    arr[k]=arr[k+1];
                }
                num--;
                j--;

            }
        }
    }
    for(i=0;i<num;i++)
    {
        printf("%d",arr[i]);
    }

}
}