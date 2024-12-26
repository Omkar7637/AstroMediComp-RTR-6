#include <stdio.h>
#include <stdlib.h>

_Noreturn void func() {
    printf("Exiting program...\n");
  
    // Terminate the program without returning
    exit(0);  
}

int main() {
    printf("Program started.\n");
  
    // This will not return control back to main
    func(); 
    printf("This line will never be reached.\n");
    return 0;
}




// #include <stdio.h>

// __declspec(noreturn) void kernelPanic(const char *message) {
//     printf("Kernel Panic: %s\n", message);
//     while (1) {
//         // System halts indefinitely.
//     }
// }
