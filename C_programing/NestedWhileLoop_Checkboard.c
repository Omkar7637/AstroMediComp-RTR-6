#include<stdio.h>
int main(void)
{
    // variable declarations
    int i_ok, j_ok, c_ok;

    // code
    printf("\n\n");

    i_ok = 0;
    while( i_ok < 64)
    {
        j_ok = 0;
        while(j_ok < 64)
        {
            c_ok = ((i_ok & 0x8) == 0) ^ ((j_ok & 0x8) == 0);

            if(c_ok == 0)
            {
                printf(" ");
            }

            if(c_ok == 1)
            {
                printf("* ");
            }

            j_ok++;
        }
        printf("\n\n");
        i_ok++;
    }
    return (0);
}