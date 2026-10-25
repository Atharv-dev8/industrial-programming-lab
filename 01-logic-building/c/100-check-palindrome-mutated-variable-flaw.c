#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
  
bool IsPalindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo/10;
    
    }
    if(iRev == iNo)     //Issue
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue =0;
    bool bRet = false;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    bRet = IsPalindrome(iValue);

    if(bRet == true)
    {
        printf("Given number is palindrome");
    }
    else
    {
        printf("Given number is not a palindrome");
    }
  
    return EXIT_SUCCESS;
}