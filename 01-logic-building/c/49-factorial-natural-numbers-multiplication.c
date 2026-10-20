




#include <stdio.h>
#include <stdlib.h>

int Summation(int iNo)
{
    int iCnt =0;
    int isum =0;

    isum =1;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        isum = isum * iCnt;
        
    }
      
    return isum;
  
}
int main()
{
    int iValue=0;
    int iRet = 0;

    printf("Enter a Frequenct :\n");
    scanf("%d",&iValue);

    iRet =Summation(iValue);
    printf(" sum is %d : ",iRet);

    return EXIT_SUCCESS;
}