#include<stdio.h>

struct structNeasted
{
    int i;
    float f;

};
struct structNeasted1
{
    char ch;
    double d;
    struct structNeasted obj;//nested structure,call the above struct in next struct
};



int main()
{
    struct structNeasted1 hobj;
    hobj.obj.i=10;//object of neasted structure is inside another structre
    hobj.ch='a';
    hobj.obj.f=12.21;
    hobj.d=34.444;
    printf("%d\n%d",hobj.obj.i),hobj.d;


    return 0;
}