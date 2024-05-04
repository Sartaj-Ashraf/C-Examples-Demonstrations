#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

    int i,arr[4];
    int option;
    int odd=0,even=0; 
    int sum=0;
    float average;
    printf("Enter your array first\n");
    for ( i = 0; i < 4; i++)
    {
       scanf("%d",&arr[i]);
    }
    
//int option;

printf("This is what you can do to your entered array \n");

printf("1. To print your entered array                  : Press 1\n");
printf("2. To get even valued number in your array      : Press 2\n");
printf("3. To get odd valued number in your array       : Press 3\n");
printf("4. To get sum and average of elements of array  : Press 4\n");

printf("\nEnter your option : ");

scanf("%d",&option);

  while (option >0 || option <5)

  switch (option)

case 1:
{
	
    for ( i = 0; i < 4 ; i++)
    {
        printf("%d \t",arr[i]);
        
    }break;

case 2:
	{
	for (i = 0; i < 4; i++)
        if (arr[i] % 2 == 0)
        {

            even++;
        }
        else
        {

            odd++;
        }
    printf("Total even numbers = %d\n", even);
    printf("Total odd numbers  = %d\n", odd);
} break;

case 4:
{
    sum=sum+arr[i];
    average=sum/10;
    printf(" The sum of elements of array are as : %d", sum);
    printf(" The average of elements of array are as : %f", average);
    


}break;

}
}












