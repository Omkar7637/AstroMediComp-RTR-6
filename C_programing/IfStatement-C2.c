#include<stdio.h>

int main(void)
{
    //variable declarations
    int age;

    //code
    printf("\n\n");
    printf("Enter Age : ");
    scanf("%d", &age);
    if(age >= 18)
    {
        printf("You Are Eligible for voting !!!\n\n");
    }

    return (0);
}