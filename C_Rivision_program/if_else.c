#include<stdio.h>
int main()
{   auto int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if (marks>=35 && marks<=44)
    {
       printf("Pass!"); /* code */
    }
    else if(marks>=45 && marks<=64)
    {
        printf("Grade B");
    }
    else if(marks>=65 && marks<=100 )
    {
        printf("Grade A");
    }
    else 
    {
        perror("Fails!");
    }
    return 0;
}