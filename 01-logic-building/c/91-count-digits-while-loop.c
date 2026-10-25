//return count of Digits

#include<stdio.h>
#include<stdlib.h>

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
    

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("COunt Of Digits Is : %d",iRet);

    return EXIT_SUCCESS;
}