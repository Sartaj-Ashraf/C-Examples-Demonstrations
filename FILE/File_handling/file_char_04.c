#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *ptr;
    char ch;
    printf("Enter data to store in the files : \n");
    ptr=fopen("sartaj.txt","a");
    ch=getchar();
   while(ch!= '#')
   {
       fputc(ch,ptr);
       ch=getchar();
   }
   fclose(ptr);

}