#include<stdio.h>
//sum is a function which takes a and b as input and will return an interger:
int sum(int a,int b);   //function prototype 

int main()
{  int a,b,c;
printf("Enter value of a");
scanf("%d",&a);
printf("Enter value of b");
scanf("%d",&b);

   c=sum(a,b); //function call
  
    printf("The sum is %d",c);

}
int sum(int a,int b)
{
int res;
res=a+b;
return res;
}

int sub(int x,int y)
{
 int  a, b, c;
 printf("Enter value of a");
scanf("%d",&a);
printf("Enter value of b");
scanf("%d",&b);
c=sub(x,y);
printf(" The sub is %d",c);
   
}
int sub()
{  int a,b;
    int diff;
    diff=a-b;
    return diff;
}
