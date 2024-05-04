#include<stdio.h>
#include<stdlib.h>
#include<string.h>
    //Basic syntax for opening or creating of a file :
int main()
{
    //file_type_pointer=("file_name.txt","mode");
    FILE *ptr;
    ptr=fopen("sample.txt", "r"); // --> for reading the file
    ptr=fopen("sample.txt", "rb"); // --> for reading in binary the file
    ptr=fopen("sample.txt", "w"); // --> for writing the file
    ptr=fopen("sample.txt", "wb"); // --> for writing in binaray file
    ptr=fopen("sample.txt", "a");  // ---> For merging the ending of the file

}