#include<stdio.h>
struct Demo
{
    int no;
    float fvalue;

     //we can do only declaration,not initilization in structure
     //bcz in struct function there is no memory allocation
     //we can store any primitive datatype except void

    /* data */
};

int main()
{
   struct Demo objct;           
   objct.no=20;            //.det operator is= called direct access operator
   objct. fvalue=23.3;
   printf("%d",objct.no);
    return 0;
}