#include<stdio.h>
struct Demo
{
    int i;
    float f;
    int j;
  
};

int main()
{
  struct Demo obj1;//after structure declaration get's compiled
    struct Demo *po=NULL;
    struct Demo *p=&obj1;
    p->i=20;//indirect access operator ,we have to used it for accessing data of pointer
    p->j=56;
    p->f=45.5;
    printf("%d",p->i);
    return 0;
}