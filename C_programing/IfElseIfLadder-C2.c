#include<stdio.h>
int main(void)
{
    // varible decalartion
    int num;

    //code
    printf("\n\n");

    printf("Enter Value For 'num' : ");
    scanf("%d", &num);

    //if -else -if ladder begins from here ... 
    if(num < 0)
        printf("NUm  = %d Is less Than 0 (Negative) !!!\n\n", num);

    else if((num > 0) && (num <= 100))
        printf("Num = %d is betwwen 0 and 100 !!! \n\n",num);
    
    else if((num > 100) && (num <= 200))
        printf("Num = %d is betwwen 100 and 200 !!! \n\n",num);

    else if((num > 200) && (num <= 300))
        printf("Num = %d is betwwen 200 and 300 !!! \n\n",num);

    else if((num > 300) && (num <= 400))
        printf("Num = %d is betwwen 300 and 400 !!! \n\n",num);

    else if((num > 400) && (num <= 500))
        printf("Num = %d is betwwen 400 and 500 !!! \n\n",num);

    else if(num > 500)
        printf("Num = %d Is Greater Than 500 !!!\n\n", num);

    else // *** this is the terminating 'Else' of This 'if -else if - else' ladder !!! ***
        printf("Inavalid value entered !!!\n\n");

    return (0);
}