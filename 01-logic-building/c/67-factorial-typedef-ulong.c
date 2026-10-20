


#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long ULONG;

ULONG Factorial(int iNo)
{
    int iCnt=0;
    unsigned long long iFact = 0;

    for(iCnt = 1 , iFact =1;iCnt<=iNo;iCnt++)
    {
      iFact = iFact * iCnt;
        
    }
    return iFact;
}

int main()
{

    int iValue = 0;
    ULONG lRet = 0;

    printf("enter no : \n");
    scanf("%d",&iValue);
    
   lRet = Factorial(iValue);

   printf("Factorial is : %lld \n",lRet);
    


    return EXIT_SUCCESS;
}