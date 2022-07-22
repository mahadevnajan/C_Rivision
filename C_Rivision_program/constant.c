#include<stdio.h>
const int A=50;

int main()
{

    const int no1=10;
    int no2=20;
    //no1++;
    // not Allowed
    //A++;
    //not allowed
    no2++;
    printf("%d",no2);
    return 0;
}