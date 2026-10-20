



#include <stdio.h>
#include <stdlib.h>


int main()
{

    int iNo = 0;

    printf("enter no : \n");
    scanf("%d",&iNo);

    int iCnt=0;

    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
       
        
          printf("%d \t",iCnt);
        
        
    }
    


    return EXIT_SUCCESS;
}