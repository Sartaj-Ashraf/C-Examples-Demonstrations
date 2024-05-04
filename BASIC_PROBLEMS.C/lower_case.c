#include<stdio.h>

main()
{
    int i,n;

    printf("enter the alphabit");
    scanf("%c", &n);
    if (n<=122 && n>=97)
    {
        printf("it is lower case");
    }
    else{
        printf("its not lower case");
    }
}