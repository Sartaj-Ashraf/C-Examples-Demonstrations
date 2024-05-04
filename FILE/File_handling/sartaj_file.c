#include <stdio.h>
#include <stdlib.h>
#include <string.h>

sar int main()
{

    int num;
    int num2;
    FILE *ptr = fopen("sartaj.txt", "r"); //-->This will open th ' sartaj txt file where value of num is stored';
    fscanf(ptr, "%d", &num);              //THis is for getting the number from the txt file;
    fscanf(ptr, "%d", &num2);
    fclose(ptr);
    printf("The value of num is %d", num);
    printf("\nThe value of num2 is %d", num2);
    return 0;
}
