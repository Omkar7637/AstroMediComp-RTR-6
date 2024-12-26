#include<stdio.h>

int main(void)
{
    int i_ok;

    // for loop increment
    printf("| Using For Loop Increment |\n");

    for(i_ok = 1; i_ok <= 10;)
    {
        printf("\t| \t%d\t |\n", i_ok++);
    }
    printf("|--------------------------|\n");

    printf("| Using For Loop Decrement |\n");
    for(--i_ok; i_ok >= 1;)
    {
        printf("\t| \t%d\t |\n", i_ok--);
    }
    printf("|--------------------------|\n");

    // while loop 
    i_ok++;
    printf("| Using While loop Increment |\n");

    while(i_ok <= 10)
    {
        printf("\t| \t%d\t |\n", i_ok++);
    }

    printf("|----------------------------|\n");
    printf("| Using While Loop Decrement |\n");
    i_ok--;

    while(i_ok >= 1)
    {
        printf("\t| \t%d\t |\n", i_ok--);
    }
    printf("|----------------------------|\n");

    // do while loop
    i_ok++;
    printf("| Using do_while loop Increment |\n");

    do
    {
        printf("\t| \t%d\t |\n", i_ok++);

    }while(i_ok <= 10);

    printf("|-------------------------------|\n");
    printf("| Using do_while loop Decrement |\n");
    i_ok--;

    do
    {
        printf("\t| \t%d\t |\n", i_ok--);
    }while(i_ok >= 1);

    return (0);
}
