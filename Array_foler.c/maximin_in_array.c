#include<stdio.h>
int main()
{
	int arr[100];
	int num;
	int i;
	int max;
	 printf("Enter size");
	 scanf("%d",&num);
	 for(i=0;i<num;i++)
	 {
	 	scanf("%d",&arr[i]);
	 }
	 	max=arr[0];
	 for(i=0;i<num;i++)
	 {
	 
	 	if(arr[i]>max){
	 		max=arr[i];
		 }
	 }
	 printf("max=%d",max);
}