#include<stdio.h>

//DEFINING STRUCT ...
struct MyPoint
{
    int x;
    int y;
};
int main(void)
{
    // variable decalarations
    struct MyPoint point_A, point_B, point_C, point_D, point_E;
    
    // code
    // Assigning Data values To The Data Members Of 'struct MyPoint' variable 'point_A'
    point_A.x = 3;
    point_A.y = 0;
    // Assigning Data values To The Data Members Of 'struct MyPoint' variable 'point_B'
    point_B.x = 1;
    point_B.y = 2;
    // Assigning Data values To The Data Members Of 'struct MyPoint' variable 'point_C'
    point_C.x = 9;
    point_C.y = 6;
    // Assigning Data values To The Data Members Of 'struct MyPoint' variable 'point_D'
    point_D.x = 8;
    point_D.y = 2;
    // Assigning Data values To The Data Members Of 'struct MyPoint' variable 'point_E'
    point_E.x = 11;
    point_E.y = 8;

    //Displaying Values Of The data members of 'struct MyPoint'(all variables)
    printf("\n\n");
    printf("Co-ordinates (x, y) Of Point 'A' Are : (%d, %d)\n\n", point_A.x, point_A.y);
    printf("Co-ordinates (x, y) Of Point 'B' Are : (%d, %d)\n\n", point_B.x, point_B.y);
    printf("Co-ordinates (x, y) Of Point 'C' Are : (%d, %d)\n\n", point_C.x, point_C.y);
    printf("Co-ordinates (x, y) Of Point 'D' Are : (%d, %d)\n\n", point_D.x, point_D.y);
    printf("Co-ordinates (x, y) Of Point 'E' Are : (%d, %d)\n\n", point_E.x, point_E.y);
    printf("\n\n");

    return(0);
}