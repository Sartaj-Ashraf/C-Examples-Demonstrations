#include<stdio.h>  
int main(){      
int i=0;    
int marks[5];     //declaration of array  
//int marks[i];
//int marks[5]={80,60,85,75};
//int marks[]={80,60,85,75}; 
//int marks[5]={80,60,85,75,25};  ---> error ,,elemnts more that array decleration;
//int marks[5]={80,60,85};     ---> index 3 and 4 will be filled with '0'
marks[0]=80;     //initialization of array    
marks[1]=60;    
marks[2]=70;    
marks[3]=85;    
marks[4]=75;    
//traversal of array    
for(i=0;i<5;i++){      
printf("%d \n",marks[i]);    
}//end of for loop     
return 0;  
}  


#include <stdio.h>

main()
{
    int a[5], i;
         printf("enter the numbers\n ");
    for (i = 0; i < 5; i++)
    {   

        scanf("%d", &a[i]);
    }
    
    printf(" the numbers  are as\n ");
    for (i = 0; i < 5; i++)
    printf(" the numbers  are as\n ");
    {
        printf("%d\n", a[i]);
    }
}