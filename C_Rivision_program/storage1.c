
#include<stdio.h>
extern int E;//in extern keyword there are multiple files ,
//but we can use same variable into another programable file 
//,aslo we can connec two file using extern keyword 
void Auto()
{
     auto int a=10;
     //auto storage class get's memory on the stack frame
    printf("%d\n",a);
}
void Register()
{
   
    register int b=20;
    //its get's memory location on the cpu register
    printf("%d\n",b);
}

void Static()

{
static int c=30;//its either global static or local static
   //extern int d=40;
   //initilization is not allowed to an local variable
    printf("%d\n",c);
}


int main()
{
   
   Auto();
   Register();
   Static();
   
  
    return 0;
    
}