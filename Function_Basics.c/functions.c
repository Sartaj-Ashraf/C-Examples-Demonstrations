
returntype functionName(type1 parameter1, type2 parameter2,...);
#include<stdio.h>
#include<conio.h>
add()                                          This is a funtion prototype 
{
    int a,b,c;                                 Decleration of the variable of ADD function
    printf("enter the value of a and b\n");    
    scanf("%d %d", &a,&b);
    c=a+b;
    printf(" addtion of a and b is %d\n", c);   This the body of add funtion
    
}
subtract()                                      This is a funtion for subtract
{  
 int a,b,c                                      Decleration of the variable of ADD function
    printf("enter the value of a and b\n");     
    scanf("%d %d", &a,&b);
    c=a+b;
    printf(" addtion of a and b is %d\n", c);
	c=a-b;
	printf("%d\n", c);                            This the body of add funtion
	
}


int main()
{ 
    add();                                       Call by main function to add fuction
    subtract();                                  Call by main function to add fuction

}


returntype functionName(type1 parameter1, type2 parameter2,...); 
#include <stdio.h>
int x = 20;//global variable
void function1()
{
  printf("%d\n" , x);
}
void function2()
{
  printf("%d\n" , x);
  x++;
}
int main() {
 
  function1();
  function2();
    return 0;
}
In the above code both the functions can use global
variable x, as we already know that global variables are accessible
by all the functions.



#include<stdio.h>
void function()

{ 
    int x=10,y=20;
    x=x+10;
    y=x+10;
    
    printf("%d %d\n",x,y);
}

int main()
{
	printf("x   y\n");
    function();
    function();
    function();
    function();

}
//output 
//20 30
//20 30
//20 30
//20 30
