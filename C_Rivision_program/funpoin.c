#include<stdio.h>
int Addition(int a,int b)
{
    int ans;
    ans=a+b;
    return ans;

}
int main()
{
    int a=10,b=20,ret=0;
    int (*fptr)(int ,int);
    fptr=Addition;
    printf("Address of addition function is:%d:",Addition);
    ret=fptr(a,b);
    printf("\nAddition :%d"),
    ret;;
    return 0;

}
