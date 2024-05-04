#include<stdio.h>  
int sum();                  prototype/declearation     --> return-type function_name();  
main()  
{  
    int result;     
    result = sum();         Function_call         ----> function_name(); 
    printf("%d",result);  
}  
int sum()                   Function definition  ----> return-type function_name()
{  
    int a,b;   
    printf("\nEnter two numbers");  
    scanf("%d %d",&a,&b);  
    return a+b;            Return value of a+b to sum();
}