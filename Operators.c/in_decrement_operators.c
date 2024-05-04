

// pre increment __ORDER
#include<stdio.h>

main()
{
    int x=10 ,y;
    y=++x;
    printf(" %d", x);
    printf(" %d", y);
}
//     output details
// //        first the x value will b incremented with 1 and then the 
// //        incremented value will be assigned to the y
// //         x=11;
// //         y=11
// //         this is called as pre-increament procedure
// // }



// post increamnet __ORDER
#include<stdio.h>

main()
{
    int x=10 ,y;
    y=x++;
    printf(" %d", x);
    printf(" %d", y);
    // output details
    // in this case the value of 'x' will be first assigend to 'y' and then the 'x' 
    // value will be incremented  
    // The intial value of the x will be assignd to the y 
    x=11 ;
    y=10
// example
#include<stdio.h>
int main()
{
	int x=20,y;
	y=x++;
	 printf("%d\n", x);
	 printf("%d", y);
	 
     output 
      x==21;
      y=20;
}


Decrement order.
#include<stdio.h>
int main()
{
	int x=14,y;
	y=x--;
	 printf("%d\n", x);
	 printf("%d", y);
	 
	output is 
    y=14;
    x=13;
    



}
