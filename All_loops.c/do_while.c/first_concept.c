#include <stdio.h>

int main()
{
    int i = 5;
    int n;
    printf("Enter the value of number n");
    scanf("%d", &n);
    do
    {
        printf("%d", i);
        i++;
    } 
	while(i==n);
}