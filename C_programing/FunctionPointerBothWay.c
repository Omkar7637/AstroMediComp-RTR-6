#include<stdio.h>

int main(void) 
{
    // Function declarations
    float add(float a, float b);
    float multiply(float a, float b);


    // code
    printf("\n\n");

    // First implementation using typedef for function pointer
    typedef float (*FloatMathFunc)(float, float);

    // Second implementation using typedef for function
    typedef float (FloatMathFunc2)(float, float);

    // First implementation
    FloatMathFunc ptrFunc1 = NULL;
    // Assigning add function to pointer
    ptrFunc1 = add; 

    if (ptrFunc1 != NULL) 
    {
        printf("Result of add using ptrFunc1: %.2f\n", ptrFunc1(3.5, 2.5));
    }

    // Second implementation
    FloatMathFunc2 *ptrFunc2 = NULL;
    // Assigning multiply function to pointer
    ptrFunc2 = multiply; 

    if (ptrFunc2 != NULL) 
    {
        printf("Result of multiply using ptrFunc2: %.2f\n", ptrFunc2(3.5, 2.5));
    }

    printf("\n\n");
    return(0);
}

float add(float a, float b) 
{
    return a + b;
}

float multiply(float a, float b) 
{
    return a * b;
}