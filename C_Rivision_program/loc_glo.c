#include<stdio.h>
int i=11;//this is global variable which is declared outside the function

 int j=0;//
void Demo()
{
    int a=10;//this is local variable which is declared inside the function
    int b=20;

}
void Hello()//this is function
{
    char ch='A';

}
int main()
{

    Demo();//function Call inside the main function 
    Hello();
    return 0;
}