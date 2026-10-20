#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>        //there is no previous boolean datatype in c after some time it get add so for calling it we write this header file

/////////////////////////////////////////////////////////////
//
//  Function name:  checkeven
//  Input        :  Integer
//  Output       :  boolean
//  Description  :  check no is even or odd
//  Date         :  09/10/2026
//  Author       :  Atharv Sukhadev Mahadik
//
//////////////////////////////////////////////////////////////
bool checkeven(
                int ino
              )
{
     if( (ino % 2) == 0)                //business logic
    {
       return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int ivalue = 0;
    bool bret = false;              //default value of boolean is false

    printf("enter number : \n");
    scanf("%d",&ivalue);

    bret = checkeven(ivalue);

    if (bret == true)
    {
        printf("it is even \n");
    }
    else
    {
        printf("it is odd \n");
    }
    

   
    return EXIT_SUCCESS;
}