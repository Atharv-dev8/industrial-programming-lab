//48967 -> 
/*
odd  : 7
Even : 6
odd  : 9
Even : 8
Odd  : 4
*/

#include<stdio.h>
#include<stdlib.h>

void IdentifyDigit(int iNo)
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
            printf("Even : %d\n",iDigit);
        } 
        else
        {
            printf("Odd : %d\n",iDigit);
        } 

        iNo = iNo/10;
    }
}        
    

int main()
{
    int iValue =0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    IdentifyDigit(iValue);

    return EXIT_SUCCESS;
}