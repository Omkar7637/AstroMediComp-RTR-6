#include <stdio.h>

int main() 
{
    // function prototype
    void sampleFunctionOne(void);
    void sampleFunctionTwo(void);
    // code 
    printf("\n--- Debug Info ---\n\n");
    sampleFunctionOne(); // Function call
    printf("\n\n");
    sampleFunctionTwo(); // Function call
    printf("\n\n");
    printf("In file: %s, function: %s() and line: %d\n",
     __FILE__, __func__, __LINE__);
    printf("\n-------------------\n");
    return(0);
}

void sampleFunctionOne(void) {
    printf("Function: %s\n", __func__);
    printf("In file: %s, function: %s() and line: %d\n",
     __FILE__, __func__, __LINE__);
}

void sampleFunctionTwo(void) {
    printf("Function: %s\n", __func__);
    printf("In file: %s, function: %s() and line: %d\n",
     __FILE__, __func__, __LINE__);
}