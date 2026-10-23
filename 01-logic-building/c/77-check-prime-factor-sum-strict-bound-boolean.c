
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt=1;iCnt<iNo/2;iCnt++)
    {
        if(iNo %  iCnt ==0)
        {
            iSum += iCnt;
        }
    }
        if(iSum ==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    

}

int main()
{

    int iValue = 0;
    bool bRet = false;

    printf("Enter A Number");
    scanf("%d",&iValue);

    bRet =  CheckPrime(iValue);

    if (bRet ==true)
    {
        printf("It Is Primr Number");
    }
    else
    {
        printf("It  Is Not A Prime Number");
    }
  
    
    
   
    


    return EXIT_SUCCESS;
}


