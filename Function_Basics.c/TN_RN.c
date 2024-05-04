#include<stdio.h>  

void printName();  prototype /decleration           --> return-type function_name(paraments,a1,b1,c1);
main ()  
{  
    printf("what is your name\n");  //This will b executed first 
    printName();           Function_call ----> function_name(arguemnet_a1,b1,c1);
}  
void printName()          Function definition  ----> return-type function_name(argument list)
{  
    printf("Hello my name is sartaj");  //After that this will be printed!(definition)
} 
