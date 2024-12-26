#include <stdio.h>

// Initialized global variables (stored in .data section)
int global_var = 10;

// Uninitialized global variables (stored in .bss section)
int uninit_var;

// Constant data (stored in .rodata section)
const char *const_str = "Hello, Objdump!";

int main() {
    // Local variables (stored in the stack)
    int local_var = 20;

    // Static local variable (stored in .data section)
    static int static_var = 30;

    printf("Global Variable: %d\n", global_var);
    printf("Uninitialized Global Variable: %d\n", uninit_var);
    printf("Constant String: %s\n", const_str);
    printf("Local Variable: %d\n", local_var);
    printf("Static Variable: %d\n", static_var);

    return 0;
}
