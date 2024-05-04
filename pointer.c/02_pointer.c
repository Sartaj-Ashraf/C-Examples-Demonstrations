#include<stdio.h>
int main()
{
    int a,b;
    printf("address of a and b\n");
    printf("%u\n",&a);
    printf("%u\n",&b);
    
    int *p,*q;  ---> this is declaration of pointer type ,,,2 byte memory usage
    p=&a;      --->  assign base address of 'a' to pointer 'p'
    q=&b;      --->  assign base address of 'b' to pointer 'q'
    p+1;
	printf(" After pointers,,,value of p and q\n");
    printf("%d\n",p);
    printf("%d\n",q);
    

}
address of a and b
6684220
6684216
 After pointers,,,value of p and q
6684220
6684216
