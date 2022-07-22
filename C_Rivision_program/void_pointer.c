#include<stdio.h>
void main()
{
    int *p=NULL;
    int *q;
    printf("%d\n",*q);
    //int ptr=&ivalue;
    void *ptr=NULL;//it's take 0th address on RAM
    printf("%d\n",*(int*)ptr);//typecasting ,we can change the datatype of variable
}