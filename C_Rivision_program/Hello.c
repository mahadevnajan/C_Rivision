#include<stdio.h>
int a;//bss(BLOCK STARTING WITH SYMBOL) section contians non initilization part
int a=10;//Non bss(BLOCK STARTING WITH VALUES) initilization part
int main()
{
    //stack section ,which contains the local variable
    printf("Hello C I am starting learning c language");
    return 0;
    
}