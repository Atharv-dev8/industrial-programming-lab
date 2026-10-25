//return sum of digits

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
    

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);
    printf("Summation Of Digit Is : %d",iRet);

    return EXIT_SUCCESS;
}