//take input from user and chec  no is divisible by 3 or 5 and write logic without using &&


#include <stdio.h>
#include <stdlib.h>


void Checkdivisible(int iNo)
{
    if (((iNo % 3) == 0) )
    {
        if( ((iNo % 5) ==0))
        {
            printf(" %d is divisible by both \n",iNo);
        }
        else
        {
            printf("%d is not divisible by any no \n",iNo);
        }
        
    }
    else
    {
        printf("%d is not divisible by any no \n",iNo);
    }
    

}
int main()
{

    int iValue = 0;

    printf("enter no : \n");
    scanf("%d",&iValue);

    Checkdivisible(iValue);


    return EXIT_SUCCESS;
}