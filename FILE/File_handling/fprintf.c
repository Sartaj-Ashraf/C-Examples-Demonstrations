#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *ptr;
    int num=10;
    ptr=fopen("sample.txt","w");
    fprintf(ptr,"%d",num);
    fclose(ptr);

}