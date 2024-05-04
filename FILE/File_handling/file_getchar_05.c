#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    #include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *ptr;
    char ch;
    printf("Enter data to store in the files : \n");
    ptr=fopen("sartaj.txt","a");
    ch=fgetc(ptr);
   while((ch!=EOF)
   {
       putchar(ch);
       ch=getc(ptr);
   }
   fclose(ptr);

}

}