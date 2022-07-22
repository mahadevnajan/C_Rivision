#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int size=0;
    int *ptr=NULL;
    printf("Enter number of element:");
    scanf("%d",&size);
    //memory allocation
    ptr=(int*)malloc(size*sizeof(int));
    if(ptr==NULL)
    {

        
        printf("unable to allocate memory:\n");
    }
    else{
        printf("Memory successfully allocate");
    }
free(ptr);

    return 0;
}