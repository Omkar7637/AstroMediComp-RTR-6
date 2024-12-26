#include<stdio.h>

void add(int , int, int** );

int main(void)
{
    int a=5, b=5, c=0;
    int *ptr = NULL;


    //add(a,b,ptr);
    add(a, b, &ptr);



}

void add(int a, int b, int** ptr)
{
    **ptr = a + b;
}