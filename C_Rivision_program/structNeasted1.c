#include<stdio.h>
struct Hello
{
    float f;
    int i;
    struct Demo{
        int j;
        int t;
    }dobj;
    /* data */
};
int main()
{
   struct Hello hobj;
    hobj.i=12;
    hobj.dobj.j=3;
    hobj.dobj.t=34;
    hobj.f=34.4;

    return 0;
}
