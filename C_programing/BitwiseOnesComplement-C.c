#include<stdio.h>

int main()
{
    // function prototypes
    void PrintBinaryFormofNumber(unsigned int);

    //variable decalaration
    unsigned int a;
    unsigned int result;

    //code
    printf("\n\n");
    printf("Enter An interger = ");
    scanf("%u",&a);

    printf("\n\n\n\n");
    result = ~a;
    printf("Bitwise COMPLEMENTING of \nA = %d (decimal)  gives result %d (Decimal). \n\n",a,result);

    PrintBinaryFormofNumber(a);
    PrintBinaryFormofNumber(result);

    return (0);
}

void PrintBinaryFormofNumber(unsigned int decimal_number)
{
    // veriable declarations
    unsigned int quotient, reminder;
    unsigned int num;
    unsigned int binary_array[8];
    int i;

    //code

    for(i = 0; i < 8; i++)
        binary_array[i] = 0;

    printf("The binary form of the decimal integer %d is \t = \t ", decimal_number);
    num = decimal_number;

    i = 7;

    while(num != 0)
    {
        quotient = num / 2;
        reminder = num % 2;
        binary_array[i] = reminder;
        num = quotient;
        i--;
    }

    for(i = 0; i < 8; i++)
        printf("%u", binary_array[i]);

    printf("\n\n");
}