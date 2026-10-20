


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt=0;
    int iSum =0;



    for(iCnt = 1;iCnt<=iNo/2;iCnt++)
    {
      
        if((iNo % iCnt) == 0)
        {
            iSum = iSum+iCnt;
        }
    }
    
    return (iSum == iNo); 

        
        
    
    
}

int main()
{

    int iValue = 0;
    bool bRet = false;
   
    printf("enter no : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if (bRet == true)
    {
        printf("it is perfect number \n");
    }
    else
    {
        printf("it is not a perfect number \n");
    }
    
   
    


    return EXIT_SUCCESS;
}


