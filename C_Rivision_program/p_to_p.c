#include<stdio.h>
int main(void)
{
    int a=10;
    int **x=&a;
    int ***a=&x;
    printf("%d",a);
    return 0;

}