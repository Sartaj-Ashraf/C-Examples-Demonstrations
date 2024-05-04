#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int arr[7]={4,4,7,1,5,5,8};
    int i,j,k,temp,n=7;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;

            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

}