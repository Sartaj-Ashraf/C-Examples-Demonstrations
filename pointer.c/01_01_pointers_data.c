#include<stdio.h>

int main()
{
    int a=10;   
    int b=11;
    printf(" a=%d\n",a);
    printf(" b=%d\n",b);
    
    
    int *p,*q;    //initializing an pointers naming p and q:
    p=&a;        //Assign the value at address of 'a' to the 'p';
    q=&b;       // Assign the value at address of 'b' to the 'q';
    a=a+2;     // Now incrase the value A by 2
    b=b+4;    //Now incrase the value b by 4
    p=p+1;  != // This will produce error if we are using it in varible assignments 
    printf("A = %d %d %d", a,*p,*q);
    
}
   

   print and scan 1 d aray using pointers
   print array elements by increment values by 3,,,add 3 to every elements



