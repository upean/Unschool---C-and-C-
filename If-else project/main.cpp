//C program to demonstrate if-else conditions
#include<stdio.h>
int main()
{
    float per;
    printf("Enter your age:");
    scanf("%f",&per);
    if(per>=26)
    {
        printf("You are too old and you don't pass the test");
    }
    else
    {
        printf("You are just perfect and you pass the test");
    }
    return 0;
}
