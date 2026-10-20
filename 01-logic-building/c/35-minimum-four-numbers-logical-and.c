#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////////////
//
//  Function name:  Minimum
//  Input        :  Integer,Integer,Integer,Integer
//  Output       :  integer
//  Description  :  get Minimum
//  Date         :  11/10/2026
//  Author       :  Atharv Sukhadev Mahadik
//
//////////////////////////////////////////////////////////////
int Minimum(
            int ino1,   
            int ino2,
            int ino3,
            int ino4
           )
{
    if ((ino1<ino2) && (ino1<ino3) && (ino1<ino4))
    {
        return ino1;
    }
    else if((ino2<ino2) && (ino2<ino3) && (ino2<ino1))
    {
       return ino2;
    }
    else if ((ino3<ino2) && (ino3<ino1) && (ino3<ino4))
    {
        return ino3;
    }
    else
    {
        return ino4;
    }
    
}
int main()
{
    int iValue1=0,iValue2=0,iValue3,iValue4,iAns;
   

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    printf("Enter Third Number : \n");
    scanf("%d",&iValue3);

    printf("Enter Forth Number : \n");
    scanf("%d",&iValue4);

    iAns = Minimum(iValue1,iValue2,iValue3,iValue4);

   printf("Minimum  no Is: %d\n",iAns);

    
    
    return EXIT_SUCCESS;
}