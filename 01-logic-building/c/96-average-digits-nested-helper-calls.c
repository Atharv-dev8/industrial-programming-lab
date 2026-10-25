#include<stdio.h>
#include<stdlib.h>
int SumDigits(int iNo)
{
    int iDigit = 0;
        int iSum = 0;

        if(iNo< 0)
        {
            iNo = -iNo;
        }
    
        while(iNo !=0)
        {
            iDigit = iNo% 10;

            iSum+= iDigit;

            iNo = iNo/10;
        }
        return iSum;
}

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo< 0)
    {
        iNo = -iNo;
    }
   
    while(iNo !=0)
    {
        iDigit = iNo% 10;
        iCount++;
        iNo = iNo/10;
    }
    return iCount;
}        

float AverageOfDigit(int iNo)
{
    int iDigit =0;
    int iCount = 0;
    int iSum = 0.0f;
    float fAvg = 0.0f;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }

    iSum = SumDigits(iNo);
    iCount = CountDigits(iNo);
    
    fAvg = ((float)iSum / (float)iCount);
    return fAvg;
}        
    

int main()
{
    int iValue =0;
    float fRet = 0.0f;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    fRet = AverageOfDigit(iValue);
    printf("Average Of Digits Is : %.2f",fRet);

    return EXIT_SUCCESS;
}