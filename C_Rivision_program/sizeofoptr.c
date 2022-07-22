#include<stdio.h>
int main()
{
    int no=10;
    int *no1;
    char ch='A';
    printf("The values of no is: %d\n",no);
    printf("The address of no is: %u\n",&no);
    printf("The Address of no1 is: %d\n",no1);
    printf("The values of ch is: %c\n",ch);
    printf("The address of ch is: %u\n",&ch);
    printf("The size of  of no is: %d\n",sizeof(no));
    printf("The size of ch is: %d\n",sizeof(ch));
    
    return 0;

}