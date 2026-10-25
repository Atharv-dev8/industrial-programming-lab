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

float AverageDigit(int iTotal,int iFrequency)
{
    float fAns = 0.0f;
    
    fAns = (float)iTotal/(float)iFrequency;

    return fAns;
}
      
    

int main()
{
    int iValue =0,iSum = 0,iCount=0;
    float fAvg = 0.0f;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iSum = SumDigits(iValue);
    iCount = CountDigits(iValue);
    
    fAvg = AverageDigit(iSum,iCount);

    printf("Number Of Digits    : %d\n",iCount);
    printf("Summation Of Digit  : %d\n",iSum);
    printf("Average Of Digits Is: %.2f\n",fAvg);

    return EXIT_SUCCESS;
}