#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////////////
//
//  Function name:  Maximum
//  Input        :  Integer,Integer,Integer
//  Output       :  integer
//  Description  :  get Maximum
//  Date         :  11/10/2026
//  Author       :  Atharv Sukhadev Mahadik
//
//////////////////////////////////////////////////////////////
int Maximum(
            int ino1,   
            int ino2,
            int ino3
           )
{
    if ((ino1>ino2) && (ino1>ino3))
    {
        return ino1;
    }
    else if((ino2>ino2) && (ino2>ino3))
    {
       return ino2;
    }
    else
    {
        return ino3;
    }
    
}
int main()
{
    int iValue1=0,iValue2=0,iValue3,iAns;
   

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    printf("Enter Third Number : \n");
    scanf("%d",&iValue3);

    iAns = Maximum(iValue1,iValue2,iValue3);

   printf("Maximum no Is: %d\n",iAns);

    
    
    return EXIT_SUCCESS;
}