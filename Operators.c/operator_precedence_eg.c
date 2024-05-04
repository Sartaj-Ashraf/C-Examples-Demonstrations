#include<stdio.h>

int main()
{
    int height,radius;
    int pi=3.14;
     printf(" enter the value of you radius  : ");
    scanf("%d", &radius);

    printf(" enter the value of you height  : ");
    scanf("%d", &height);

    printf(" the area of your cylender is %d\n", 2*pi*radius*height + radius);
}

// we got result 155 but its real value is 314.
// this is because of the operator precedance ,,,
// although the the excution goes for the left to right operation procedure 
// because of the first priority operators//


// explaination
//2*pi*radius*height + radius ---->  )r=5 and h=5

// 2*3.14*5*5+5
// 6*5*5+5
// 30*5+5
// 150+5
// 155

