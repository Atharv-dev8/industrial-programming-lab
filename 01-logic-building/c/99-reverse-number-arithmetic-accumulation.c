#include <stdio.h>
#include <stdlib.h>
  
int ReverseNumber(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo/10;
    
        
    }
    return iRev;
}
int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = ReverseNumber(iValue);
    printf("Reverse Number Is : %d\n",iRet);




   
    return EXIT_SUCCESS;
}