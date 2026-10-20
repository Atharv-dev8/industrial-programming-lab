


#include <stdio.h>
#include <stdlib.h>

void DisplayFactors(int iNo)
{
    int iCnt=0;

    printf("Factors of %d is ",iNo);

    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
      
        if((iNo % iCnt) == 0)
        {
             printf("%d \t",iCnt);
        }
        
        
    }
}

int main()
{

    int iValue = 0;

    printf("enter no : \n");
    scanf("%d",&iValue);

    DisplayFactors( iValue);
    


    return EXIT_SUCCESS;
}


//time complexity: O(N)