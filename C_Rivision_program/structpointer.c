#include<stdio.h>
struct Demo
{
    int i;
    struct Demo *ptr;
};
int  main()
{
    struct Demo obj1,obj2,obj3;
    obj1.i=12;
    struct Demo *p=&obj1;
    obj1.i=11;
    obj1.ptr=&obj2;
    obj2.i=21;
    obj2.ptr=&obj3;
    obj3.i=51;
    obj3.ptr=NULL;
    printf("  obj.i:%d\n  obj1.ptr :%d\n  obj2.i :%d\n  obj2.ptr :%d\n  obj3.i :%d\n  obj3.ptrr: %d\n",obj1.i,obj1.ptr,obj2.i,obj2.ptr,obj3.i,obj3.ptr);

    return 0;
}
