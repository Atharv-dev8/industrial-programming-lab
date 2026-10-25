//Input : 6457  -> 22   ->22/4 -> 5.5
//Input : 734   -> 14
//Input :45     -> 9

#include<stdio.h>
#include<stdlib.h>

float AverageOfDigit(int iNo)
{
    int iDigit =0;
    int iCount = 0;
    int iSum =0;
    

    if(iNo < 0)
    {
        iNo = -iNo;
    }
   
    while(iNo !=0)
    {
        iDigit = iNo % 10;
        iSum =  iSum + iDigit;
        iCount++;
        iNo = iNo/10;
    }
  
    return ((float)iSum/(float)iCount);
}        
    

int main()
{
    int iValue =0;
    float fRet = 0.0f;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    fRet = AverageOfDigit(iValue);
    printf("Average Of Digits Is : %f",fRet);

    return EXIT_SUCCESS;
}