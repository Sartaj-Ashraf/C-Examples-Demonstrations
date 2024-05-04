This is an array that will store 5 different data of numbers

#include<stdio.h>  
int main(){      
int i=0;    
data_type array_name[couter initializing(or nubmer)];     //declaration of array  
//int marks[i];
//int marks[5]={80,60,85,75};
//int marks[]={80,60,85,75}; 
//int marks[5]={80,60,85,75,25};---> error ,,elemnts more that array decleration value;
//int marks[5]={80,60,85};      --> index 3 and 4 will be filled with '0'   
//traversal of array    
for(i=0;i<5;i++)   //---->          forloop to scan number one by one in loop
{       
scanf("%d \n",&array_name[i]);//    Enter the value using scanf in [i] having indexes 0 1 2 3       
}//end of for loop    

for ( i = 0; i < 5; i++)           //This forloop is to access the value stored in indexes 
{
    printf("%d",array_name[i]);   //This will print the value entered by the user using scanf
}

return 0;  
}  