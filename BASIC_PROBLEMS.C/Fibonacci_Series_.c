#include <stdio.h>

main()
{
    int a = 0; 
	int b = 1;
	int term;
    int n;

    printf("Enter the nth term of series");
    scanf("%d", &n);
    printf("%d  %d",a,b);

    for (int i = 0; i<=n+2; i++)
    
    {
        term = a + b;
        printf("%d", term);
        a = b;
        b = term;
    
    }
}