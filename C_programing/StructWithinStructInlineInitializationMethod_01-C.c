#include<stdio.h>

struct Rectangle
{
    struct MyPoint
    {
        int x;
        int y;
    } point_01, point_02;
} rect = { { 2, 3}, { 5, 6}};

int main(void)
{
    // variable declarations
    int length, breadth, area;

    //code

    length = rect.point_02.y - rect.point_01.y;
    if(length < 0)
        length = length * -1;

    breadth = rect.point_02.x - rect.point_01.y;
    if(breadth < 0)
        breadth = breadth * -1;

    area = length * breadth;

    printf("\n\n");
    printf("Length Of Recatangle = %d\n\n", length);
    printf("Breadth Of Rectangle = %d\n\n", breadth);
    printf("Area Of Rectangle = %d\n\n", area);

    return(0);
}