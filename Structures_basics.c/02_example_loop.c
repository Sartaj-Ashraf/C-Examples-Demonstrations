#include <stdio.h>
struct student
{
    int roll_no;
    char sec;
    char name[40];
} x;

int main()
{
    printf("Enter the follwing details in a sequence\n");
    int i;
    for (i = 1; i <= 2; i++)
    {
        printf(" Roll_no: \n Section: \n Name :\n \n");
        scanf("%d %c %s", &x.roll_no, &x.sec, &x.name);
        printf("  Roll_no=%d  \n  Section=%c  \n  Name=%s  \n \n \n", x.roll_no, x.sec, x.name);
    }
}