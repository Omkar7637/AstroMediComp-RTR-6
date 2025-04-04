#include<stdio.h>

// *** GLOBAL SCOPE ***
int main(void)
{
    // *** LOCAL SCOPE OF main() begind ***

    // variable declarations 
    // 'a' is a Local Variable. It is local to main() only.
    int a = 5;

    //function prototypes
    void change_count(void);

    // code
    printf("\n");
    printf("A = %d\n\n",a);

    // Local_count is initialized to 0.
    // local_count = local_count + 1 = 0 + 1 = 1
    change_count();

    // Since, 'local_count' is an ordinary local variable of chnage_count(), it will NOT retain its value from prevoius call to chnage_count().
    // so local_count is AGAIN initialized to 0
    // local_count = local_count + 1 = 0 + 1 = 1

    change_count();
    // Since, 'local_count' is an ordinary local variable of chnage_count(), it will NOT retain its value from prevoius call to chnage_count().
    // so local_count is AGAIN initialized to 0
    // local_count = local_count + 1 = 0 + 1 = 1
    change_count();

    return (0);

    // *** LOCAL SCOPE OF main() ends ***
}

// *** GLOBAL SCOPE ***

void chnage_count(void)
{
    // *** LOCAL SCOPE OF change_count begins ***

    // variable declarations
    // 'local_count' is a local variable. It is local to chnage_count() only.
    int local_count = 0;

    //code
    local_count = local_count + 1;

    printf("Local Count = %d\n", local_count);

    // *** LOCAL SCOPE OF change_count() ends ***
}

// *** GLOBAL SCOPE ***