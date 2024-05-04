1   Function declaration 	    return_type function_name (argument list);
2	Function call	            function_name (argument_list)
3	Function definition	        return_type function_name (argument list) {function body;}


// call_by_value;
#include<stdio.h>
call_by_value(int num);
{
    int num;
    printf("before adding the value");
    num=num+100;
    printf("after function call and aditon %d",num);
}
int main()
{ int x=100;
printf("The value of x before call isv %d", x);
call_by_value();
printf(" After calling the value.the value of x is %d",x);
}