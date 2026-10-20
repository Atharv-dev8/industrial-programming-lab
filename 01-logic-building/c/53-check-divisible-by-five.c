//take input from user and chec  no is divisible by 5 or not


#include <stdio.h>
#include <stdlib.h>


void Checkdivisible(int iNo)
{
    if (iNo % 5 == 0)
    {
        printf("no is divisible");
    }
    else
    {
        printf("no is not divisible");
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