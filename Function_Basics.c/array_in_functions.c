#include<stdio.h>
 modify(int x[]);

int main()
{ 
    int i;
    int arr[5]={1,2,3,4,5};
    printf("Before passing modidy function the elements of array are as: \n");
	for (i = 0; i < 5; i++)
    printf("%d\n",arr[i]);
    modify(arr);
    printf(" After passing/calling the function modify ,the elements are now modified by adding 5 to each element:\n");
    for (i = 0; i < 5; i++)
    printf("%d \n",arr[i]);


}
modify(int x[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        x[i]=x[i]+5;
    }
    
}