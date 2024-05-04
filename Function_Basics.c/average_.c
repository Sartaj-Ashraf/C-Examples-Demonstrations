#include <stdio.h>
float average(int a, int b, int c);

int main()
{
    int a, b, c, result;
    printf("Enter value of A\n");
    scanf("%d", &a);

    printf("Enter value of b\n");
    scanf("%d", &b);

    printf("Enter value of b\n");
    scanf("%d", &c);
    result=average(a,b,c);
    printf("The average is %d\n",result);
    return 0;
}
float average(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}