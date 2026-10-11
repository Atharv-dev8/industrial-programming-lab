#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////
//
//  Function name:  checkeven
//  Input        :  Integer
//  Output       :  void
//  Description  :  check no is even or odd
//  Date         :  09/10/2026
//  Author       :  Atharv Sukhadev Mahadik
//
//////////////////////////////////////////////////////////////
void checkeven(
                int ino
              )
{
     if( (ino % 2) == 0)                //business logic
    {
        printf("it is even number \n");
    }
    else
    {
        printf("it is odd number \n");
    }
}
int main()
{
    int ivalue = 0;

    printf("enter number : \n");
    scanf("%d",&ivalue);

    checkeven(ivalue);

   
    return EXIT_SUCCESS;
}