//PRGRAM ON OPERATION ON ARRAY'S';

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i, arr[20] ,option,num;
    printf("What is the size of your array you want  : ");
    scanf("%d", &num);

    printf("Enter your array elements\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (1)
    {
        printf("\n\n");
        printf("This is what you can do to your entered array \n");

        printf("To exit from the program                         : Press 0\n");
        printf("To (print) your entered array                    : Press 1\n");
        printf("To get (even) valued number in your array        : Press 2\n");
        printf("To get (odd) valued number in your array         : Press 3\n");
        printf("To get (sum) and (average) of elements of array  : Press 4\n");
        printf("To get the (maximum, minimum) number in array    : Press 5\n");
        printf("To remove the (duplicates) form the array        : Press 6\n");
        printf("To print the entered array in (reverse order)    : Press 7\n");
        printf("To re-nter the array                             : Press 8\n");

        printf("\nEnter your option : ");
        scanf("%d",&option);
        switch (option)
        {
            case 8:    // For r2-entering the array
        {
            printf("Enter the size of your array\n");
            scanf("%d", &num);
            printf("Enter your array elements\n");
            for (i = 0; i < num; i++)
            {
                scanf("%d", &arr[i]);
            } break;
        }

        case 1: //CASE for printing your array
        {

            for (i = 0; i < num; i++)
            {
                printf("%d \t", arr[i]);
            }
        }
        break;

        case 2: //CASE to print even numbers
        {
            int even = 0;
            for (i = 0; i < num; i++)
                if (arr[i] % 2 == 0)
                {

                    even++;
                    printf("%d\t", arr[i]);
                }
            printf("Total even numbers = %d\n", even);
        }
        break;
        case 3: //CASE to print odd numbers;
        {
            int odd = 0;
            for (i = 0; i < num; i++)
                if (arr[i] % 2 != 0)
                {

                    odd++;
                    printf("%d\n", arr[i]);
                }
            printf("Total odd numbers  = %d\n", odd);
        }
        break;

        case 4: //Case for sum and average
        {
            int sum = 0;
            float average;
            for (i = 0; i < num; i++)
            {
                sum += arr[i];
            }
            average = sum / num;
            printf("Sum    : %d\n", sum);
            printf("Average: %f", average);
        }
        break;

        case 5: //CASE to find max and min in array;
        {
            int max;
            int min;
            max = arr[0];
            for (i = 0; i < num; i++)
            {

                if (arr[i] > max)
                {
                    max = arr[i];
                }
            }
            min = arr[0];
            for (i = 0; i < num; i++)
            {

                if (arr[i] < min)
                {
                    min = arr[i];
                }
            }

            printf("Maximum element=%d\n", max);
            printf("Minimun element=%d\n", min);
        }
        break;

        case 6: //CASE to remove the duplicats
        {
            int i, j, k;
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
        
        case 7: //CASE for reverse order
        {
            for (i = num - 1; i >= 0; i--)
            {
                printf("%d\t", arr[i]);
            }
            break;
        }
        
            case 0:    //case to exit from the loop;
            return 0;
            break;
        }
    }
}
