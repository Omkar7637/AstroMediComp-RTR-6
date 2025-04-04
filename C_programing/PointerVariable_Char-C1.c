#include<stdio.h>

int main(void)
{
    // variable decalartions
    char ch;
    char* ptr = NULL; // Declaration Method 1:-'ptr' is a variable of type 'char*'

    //code
    ch = 'A';

    printf("\n\n");

    printf("******** BEFORE ptr = &ch ********\n\n");
    printf("Value Of 'ch'              = %c\n\n", ch);
    printf("Address Of 'ch'            = %p\n\n", &ch);
    printf("Value At Address Of 'ch'   = %c\n\n", *(&ch));

    //Assihning address of variable 'ch' to pointer variable 'ptr'
    //'ptr' now contains address of 'ch'...hence, 'ptr' is SAME as '&ch'

    ptr = &ch;

    printf("\n\n");
    printf("******** AFTER  ptr = &ch ********\n\n");
    printf("Value Of 'ch'              = %c\n\n", ch);
    printf("Address Of 'ch'            = %p\n\n", ptr);
    printf("Value At Address Of 'ch'   = %c\n\n", *ptr);

    return(0);
    
}