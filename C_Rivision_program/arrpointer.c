#include<stdio.h>
int main(void)//voi function is used to return nothing
{
    int arr[5]={10,20,30,40,50};
    int *p=&(arr[1]);
    int *q=&(arr[4]);
    printf("%d\n",(p)+(2));//allowed
    //printf("%d",(p)+(q));//not allowed
    printf("%d",(p)-(q));
    //q-p/(sizeof(pointertype))  formula

    //allowed ,bcz we have know both variable address 
    //printf("%u\n",sizeof(*p));
    return 0;

}