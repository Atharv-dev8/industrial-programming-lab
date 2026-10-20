#include <stdio.h>
#include <stdlib.h>

void Display(iNo)
{
    int iCnt =0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {

        printf("%d \n",iCnt);
    }
  
}
int main()
{
     int iValue=0;
    printf("Enter a Frequenct :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}