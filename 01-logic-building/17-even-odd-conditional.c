#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ivalue = 0;

    printf("enter number : \n");
    scanf("%d",&ivalue);

    if( (ivalue % 2) == 0)
    {
        printf("it is even number \n");
    }
    else
    {
        printf("it is odd number \n");
    }
    


    return EXIT_SUCCESS;
}