// CONDITON TRICKS FOR FORLOOP;



// BASIC syntax of an forloop
for(initilization   ; temination condition  ;   moditfication to the printed values)
#include<stdio.h>

int main()
{  int i;
    for (i=0; i<10; i++)    /*HERE MUST B THE 2 SAMICOLAN INSIDE THE FORLOOP SYNTAX ...
                            ITS NOT COMPALSERY TO GIVE A CONDITION*/
    {
       printf("%d", i);

    }

}



// INtilization prcess and ways 
// int i=o;-----> one way 
// for(int =0; ; )------> this is also valid
/*int i;
    for(no initilization ; ;)---- this is also valid
*/
#include<stdio.h>

int main()
{  int i=0;
    for (i/*(Rather initializing here we can initialize it in the first)   */; i<10; i++)    
    {
printf("%d", i);

    }

}





// WITHOUT initializing
//  it will take the garbage value thats (0)

// say is 0 <10 ---> yes
// print(0)
// incrament 0 by 1----->   means 0+1---->  1
// is 1<10; ---> yes 
// print (1);
// incrament 1 by 1 ----- means 1+1 -----> 2

includiding (0) it will print to 9 ---cuz at 10 the condition becomes false
#include<stdio.h>

int main()
{  int i;
    for (i   /*(Rather initializing here we can initialize it in the first) */   ; i<10; i++)    
    {
printf("%d\n", i);

    }

}

// DECLEARING MORE THAN ONE VARIABLE IN THE FIRST CONDTION

       #include<stdio.h>

int main()
{  int i,j=0;        /* here also the initial value of i will be takan as (0)
                        and we are printing as the (i,j) but there is no increament in the value of j
                        so the desired out put will be j,i= 0,01,02,03,04,05,06,07,08,09,0  */
    for(; i<10; i++)  
	{
	  
       printf("%d,%d", i,j);

    }

}








TERMINATION CONDITIONS
FOR(intilization ;   Termination condition    ;   modification)

#include<stdio.h>

int main()
{  int i,J;
    for (i=0, J=1;     ; i++,J++)   ----> if the condition is removed it will give you an infinite loop;
printf("%d,%d", i,J);

}






#include<stdio.h>

int main()
{  int i,J;
    for (i=0, J=1; i<10,J<=4; i++,J++)-----> in this case the temiation case is the scond condition i;e 
                                          j<4   ---> so it will print i,j= 0,11,22,33,4   
printf("%d\,%d", i,J);
// the value for i and j respectively are as :  0,1
// the value for i and j respectively are as :  1,2
// the value for i and j respectively are as :  2,3
// the value for i and j respectively are as :  3,4

    

}

putting an OR (  ||)  logic ,,
it means that if the scond conditon is not true and the first conditon is true it will execute the __valuelessu
utill the first condition becomes true

#include<stdio.h>

int main()
{  int i,J;
    for (i=0, J=1; i<10 || J<=4; i++,J++)   
printf("  %d\n,%d\n", i,J);

// in this operation it will print
// i and j values are aslo iff the j<=4 it it will still execute the value of j to 
//  = 0,1  1,2  2,3  3,4  4,5  5,6  6,7  7,8  8,9  9,10
    

}



quick quize ,,,,
Declearing all three condition..

#include<stdio.h>

int main()
{  int i,J,k;
    for (i=1,J=2,k=3; i<=5,J<=6,k>1; i++,J++,k--)   
printf("the i value : %d\n,the j value : %d\n,the k value  : %d\n", i,J,k);

    

}