//input is 8967 then it shoud display  -> 7 9
//45658 -> 5 5

#include<stdio.h>
#include<stdlib.h>

void DisplayOdd(int iNo)
{
    int iDigit = 0;

    if(iNo< 0)
    {
        iNo = -iNo;
    }
   
    while(iNo !=0)
    {
        iDigit = iNo% 10;

        if((iDigit % 2) != 0)
         {
            printf("%d",iDigit);
         }  
        iNo = iNo/10;
    }
}        
    

int main()
{
    int iValue =0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    DisplayOdd(iValue);

    return EXIT_SUCCESS;
}