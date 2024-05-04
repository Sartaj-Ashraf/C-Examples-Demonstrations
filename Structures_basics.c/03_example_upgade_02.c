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
int main(){
	 printf("Enter the following details of students\n");
    int i;
    for (i = 1; i <=2; i++){
      printf("Enter  name: \n");
      scanf("%s",profile.name);

       printf("Enter address: \n");
      scanf("%s",profile.address);

      printf("Enter phn number: \n");
      scanf("%d", &profile.phn_number);

      printf("Enter roll_no: \n");
      scanf("%d",&profile.roll_no);

        printf("Enter course desired: \n");
      scanf("%s", profile.course);       
    }
    printf("profile.name=%s \n profile.address=%s  \nprofile.phn_number=%d  \n profile.roll_no=%d \nprofile.course=%s  \n ");
}