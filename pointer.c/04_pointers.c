#include<stdio.h>
swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
     printf("After swap\n ");
    printf("\nX as A=%d",x);
    printf("\nY as B=%d\n",y);
}
int main()
{
	
    int a=10;
    int b=20;
    
    printf("Before swap\n ");
    printf("\nA= %d",a);
    printf("\nB= %d\n",b);
    swap(a,b);

}
output:
Before swap

A= 10
B= 20
After swap

X as A=20
Y as B=10

