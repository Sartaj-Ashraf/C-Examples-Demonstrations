#include<stdio.h>
#include<string.h>
#define ESC 21
#define F1 59
#define f2 60
void signup(void);
void login(void);

struct {
    char password[20];
    char username[20];

}s;
  
  FILE *fp;
  
void main()
{
    int ch;
    gotoxy(20,5);
    printf("_____________SARTAJ ASHRAF__________");
    gotoxy(28,7);
    printf(" YOur's Welcome Here.......");
    gotoxy(28,9);
    printf("Press F1 for Login");
    gotoxy(28,11);
    printf("Press F2 for Signup");
    gotoxy(20,13);
    printf("Press ESC For Exit ");
    gotoxy(20,15);
    printf("________************_________");
    ch=getch();
    switch(ch)
    {
        case F1:
        gotoxy(10,14);
        for(int i=0;i<40;i++)
        {
             printf("_");
             delay(40); 
        }
        login();
        break;
        
         case F2:
        gotoxy(10,14);
        for(int i=0;i<40;i++)
        {
             printf("_");
             delay(40); 
        }
        signup();
        break;
        exit(0);
        break;
    }
}
void login()
{
    int c;
    char username[20];
    char pass[20];
    char chkp;
    char chku;
    gotoxy(23,5);
    printf("_________Login Zone________");
    fp=fopen("record.bin","rb");
    printf("ENter Username");
    gets(username);
    gotoxy(23,9);
    printf("Enter Password");
    for(int i=0;c=getch()!=13;i++)
    {
        pass[i]=c;
        printf("*");
    }
    pass[i]='\o';
    while(!feof(fp))
    {
        fread(&s,sizeof(s),1,fp);
        chku=strcmp(username,s.username);
        chkp=strcmp(pass,s.password);
        if(chku==0 &&chkp!=0)
        {
            printf("Invaled Password!!!!");
            break;
        }
        else if(chku==0&&chkp==0)
        {
            gotoxy(20,10);
            printf("__Hello %s Welcome Here__",s.username);
            break;
        }
    }


}