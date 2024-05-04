#include<stdio.h>
sartaj(){
    printf("Name     : SARTAJ ASHARF\n");
    printf("Address  : PULWAMA\n");
    printf("Roll_no  : 114\n");
    printf("Phone_no : 7889662700\n");
}

sujaat(){
    printf("Name     : example 1\n");
    printf("Address  : example 2\n");
    printf("Roll_no  : example 3\n");
    printf("Phone_no : example 4\n");
}

int main()
{  
char data[20];
printf("Enter name of student you want to get details  : ");
scanf("%c",&data);
    switch(data)
    {
    	case 'sartaj' :
    	{
    		sartaj();
    		break;
		}
		case 'example':
		{
			sujaat();
			break;
		}
	}

}