#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *ptr;
    int num;
    ptr=fopen("sample2.txt","r");
    if(ptr==NULL)
    {
        printf("This file does not exist");
    }
    else{
    fscanf(ptr,"%d",&num);
    printf("num= %d", num);
    }
}