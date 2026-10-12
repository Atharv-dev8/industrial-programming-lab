#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iValue1=0,iValue2=0,iAns=0;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    if (iValue1>iValue2)
    {
        printf("Maximum Is : %d \n  ",iValue1);
    }
    else
    {
        printf("Maximum Is : %d \n   ",iValue2);
    }
    


    
    
    return EXIT_SUCCESS;
}