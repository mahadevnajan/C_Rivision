#include<stdio.h>
int Addition(int no1,int no2)
{
    register ans;//register storage class which is memory gets allocated inside the register directly
     //bcz we can access data by fastest way
     //cpu register:-
     /*
     1)EAX=Auxillary Register
     2)EBX=Base Register
     3)ECX=count register
     4)EDX=Data Register 
     
     */
      ans=no1+no2;
     
     
     return ans;
}
int main()
{
    /*int A=10;
    int B=20;*/
    static int b=32;//incase of static memory gets allocated inside the static segment 
    //default values of static storage class is '0.0' or '/0',life time of static variable is througout the program

    auto int C;//it is default storage class ,it has memory gets allocated on stack,scope of the variable inside the block
    C=Addition(50,20);
    printf("%d",C);

    return 0;

}