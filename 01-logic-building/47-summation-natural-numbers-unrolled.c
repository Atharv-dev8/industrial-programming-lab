//input : 5
//1+2+3+4+5=15



#include <stdio.h>
#include <stdlib.h>


  

int main()
{
   int iCnt = 0;
   int isum = 0;

   iCnt = 1;

   //sum = 0+1;  sum->1
    isum = isum + iCnt;
    iCnt++;

    //sum = 1+2;  sum->3
    isum = isum + iCnt;
    iCnt++;

    //sum = 3+3;  sum->6
    isum = isum + iCnt;
    iCnt++;

    //sum = 6+4;  sum->10
    isum = isum + iCnt;
    iCnt++; //5


    printf("%d\n",isum);           //10

    return EXIT_SUCCESS;
}