#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int a,b,c,d;
	float x1,x2;
    printf("Enter the value of the constants a,b,c  :\n ");
    scanf("%d %d %d",&a,&b,&c);
     d=b*b-4*a*c;
     printf("The determinant =%d \n",d);
     if( d<0)
     {
         printf("The roots are imaginaray\n");
     }
     else if(d>0)
     {
         x1= ((-b + sqrt(d) )/(2*a) );
         x2= ((-b - sqrt(d) )/(2*a) );
         
         printf("ROOTS ARE \n");
         printf(" x1=%f\n x2=%f\n",x1,x2);
     }
     else if(d==0)
     {
     	x1=x2=((-b)/(2*a));
     	printf("Both roots are equal x1=x2=%d",x1);
	 }

}