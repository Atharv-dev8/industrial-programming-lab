


#include <stdio.h>
#include <stdlib.h>

int Factorial(int iNo)
{
    int iCnt=0;
    int iFact =1;

    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
      iFact = iFact * iCnt;
        
    }
    return iFact;
}

int main()
{

    int iValue = 0;

    printf("enter no : \n");
    scanf("%d",&iValue);
    int iRet =0;
   iRet = Factorial(iValue);

   printf("Factorial is : %d \n",iRet);
    


    return EXIT_SUCCESS;
}