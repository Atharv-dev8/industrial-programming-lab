//input is 8967 then it shoud display  ->6  8
//45658 -> 8 6 4

#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int iNo)
{
    int iDigit = 0;

    if(iNo< 0)
    {
        iNo = -iNo;
    }
   
    while(iNo !=0)
    {
        iDigit = iNo% 10;

        if((iDigit % 2) == 0)
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

    DisplayEven(iValue);

    return EXIT_SUCCESS;
}