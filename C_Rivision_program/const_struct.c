#include<stdio.h>
struct const_struct
{
    const int i;
    const int j;
};
int main()
{
    const struct const_struct obj={11,21};
    printf("%d\n",obj.i);
    printf("%d",obj.j);
    return 0;
}
