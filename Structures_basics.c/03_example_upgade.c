#include<stdio.h>
struct students
{ 
    char name[40];
    char address[40];
    int phn_number;
    int roll_no;
    char course[40];
};

struct students profile;

int main()
{
    printf("Enter the following details of students\n");
    int i;
    for (i = 0; i <=2 ; i++)
    {
        printf("Enter  name: \nEnter address: \nEnter number: \nEnter roll_no:  \nEnter course desired: \n\n");
        scanf("%s  %s  %d  %d  %s ", profile.name, profile.address, &profile.phn_number, &profile.roll_no, profile.course);
        
    }
    printf("These are the details of the follwing students");
    for(i=1;i<=2; );{
    printf("%s \n %s  \n%d  \n%d \n%s\n ",profile.name, profile.address, profile.phn_number, profile.roll_no, profile.course);
   }
}