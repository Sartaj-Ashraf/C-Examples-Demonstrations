/*Program to print the table of a given number in reverse order*/
#include<stdio.h>
int main(){
    int num, i, product;
    printf("Enter the value of num\n");
    scanf("%d", &num);
    i = 10;
    while (i >=1)
    {
        product = num * i;
        printf("%d * %d =%d\n", num, i, product);
        i--;
    }
    return 0;
}