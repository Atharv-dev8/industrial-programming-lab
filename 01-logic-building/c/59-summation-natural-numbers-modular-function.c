


#include <stdio.h>
#include <stdlib.h>

int Summation(int iNo)
{
    int iCnt=0;
    int iSum =0;

    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
      iSum = iSum + iCnt;
        
    }
    return iSum;
}

int main()
{

    int iValue = 0;

    printf("enter no : \n");
    scanf("%d",&iValue);
    int iRet =0;
   iRet = Summation(iValue);

   printf("%d",iRet);
    


    return EXIT_SUCCESS;
}