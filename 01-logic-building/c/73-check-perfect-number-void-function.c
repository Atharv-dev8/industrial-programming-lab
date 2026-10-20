


#include <stdio.h>
#include <stdlib.h>

void CheckPerfect(int iNo)
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
        if(iSum == iNo)
        {
            printf("it is perfect no \n'");
        }
        else
        {
            printf("it is not a perfect number \n");
        }

        
        
    
    
}

int main()
{

    int iValue = 0;
   
    printf("enter no : \n");
    scanf("%d",&iValue);

    CheckPerfect(iValue);
   
    


    return EXIT_SUCCESS;
}


