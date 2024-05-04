#include<stdio.h>

int main()
{
    int x=5,*p,**q,***r;
    printf("Address of x is %u\n",&x);
    printf("Address of p is %u\n",&p);
    printf("Address of q is %u\n",&q);
    printf("Address of r is %u\n\n",&r);
    
    printf("After usig pointers\n");

    p=&x;
    q=&p;
    r=&q;
    **q=7;
    ***r=10;
    printf(" x =%d\n",x);
    printf(" p =%d\n",p);
    printf(" q =%d\n",q);
    printf(" r =%d\n",r);

}
Address of x is 6684236
Address of p is 6684224
Address of q is 6684216
Address of r is 6684208

After usig pointers
 x =10
 p =6684236
 q =6684224
 r =6684216
