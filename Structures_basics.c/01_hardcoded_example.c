#include <stdio.h>
struct student
{
	int roll_no;
	char sec;
	char name[40];
}x;
int main()
{
	printf("Enter roll_no sec and name of studend");

	scanf("%d %c\n %s\n", &x.roll_no, &x.sec, x.name);
	printf("%d %c\n %s\n", x.roll_no, x.sec, x.name);
}