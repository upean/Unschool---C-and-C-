// determine if number is odd or even using if-else
#include<stdio.h>
int main()
{
int num=0;
printf("Write your favorite number: ");
scanf("%d",&num);
if(num%2==0)
    printf("You're favorite number is an even number.");
else
    printf("You're favorite number is an odd number.");
return 0;
}
