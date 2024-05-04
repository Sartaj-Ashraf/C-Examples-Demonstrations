#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("sample.txt", "r");
    fscanf(ptr, "%d", &num);
    printf("num=%d", num);
    printf("\n");
    fclose(ptr);
    fscanf(ptr, "%d", &num2);
    printf("num2=%d", num2);
}