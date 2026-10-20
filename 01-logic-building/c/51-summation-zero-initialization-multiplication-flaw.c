//input : 5
//1+2+3+4+5=15




#include <stdio.h>
#include <stdlib.h>

int Summation(int iNo)
{
    int iCnt =0;
    int isum =0;
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
    printf("%d",iRet);

    return EXIT_SUCCESS;
}