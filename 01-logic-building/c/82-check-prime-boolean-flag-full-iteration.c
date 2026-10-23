
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    for(iCnt=2;iCnt<=iNo/2;iCnt++)
    {
        if(iNo %  iCnt ==0)
        {
          bFlag = false;
        }
    }
    
    return bFlag;
    
}

int main()
{

    int iValue = 0;
    bool bRet = false;

    printf("Enter A Number : ");
    scanf("%d",&iValue);

    bRet =  CheckPrime(iValue);

    if (bRet)
    {
        printf("It Is Prime Number");
    }
    else
    {
        printf("It  Is Not A Prime Number");
    }
  
    
     return EXIT_SUCCESS;
}


