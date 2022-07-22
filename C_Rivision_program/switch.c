#include<stdio.h>
int main()
{
    auto int istd=0;
    printf("Enter your std:");
    scanf("%d",&istd);
    switch(istd)
    {
        case1:
        printf("Your exam is at 8:00am\n");
        break;
        case2:
        printf("Your exam is at 9:00am\n");
        break;
        case3:
        printf("Your exam is at 10:00am\n");
        break;
        case4:
        printf("Your exam is at 11:00am\n");
        break;
        default:
        printf("Invalid std");
        

    }
    

    return 0;
}