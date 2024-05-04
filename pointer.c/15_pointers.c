#include<stdio.h>

int main()
{
    int num[]={24,34,12,44,56,54};
    int i=0;
    while(i<=5)
    {
        printf("\nAdress=%d",&num[i]);
        printf("\t\t elements=%d",num[i]);
        i++;
    }

}

OUTPUT:
Adress=6684208           elements=2
Adress=6684212           elements=34
Adress=6684216           elements=12
Adress=6684220           elements=44
Adress=6684224           elements=56
Adress=6684228           elements=54