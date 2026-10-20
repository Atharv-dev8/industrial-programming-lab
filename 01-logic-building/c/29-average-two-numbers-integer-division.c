#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////////////
//
//  Function name:  Average
//  Input        :  Integer,Integer
//  Output       :  float
//  Description  :  get Average
//  Date         :  11/10/2026
//  Author       :  Atharv Sukhadev Mahadik
//
//////////////////////////////////////////////////////////////
float Average(
            int ino1,   
            int ino2
           )
{
    float fAvg = 0.0f;

    fAvg = (ino1+ino2)/2;
   
    return fAvg;
}
int main()
{
    int iValue1=0,iValue2=0;
    float fAns= 0.0f;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

   fAns = Average(iValue1,iValue2);

   printf("Average Is: %f\n",fAns);

    
    
    return EXIT_SUCCESS;
}