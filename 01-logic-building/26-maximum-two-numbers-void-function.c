#include <stdio.h>
#include <stdlib.h>

void Maximum(
            int ino1,   
            int ino2
           )
{
  if (ino1>ino2)
    {
        printf("Maximum Is : %d \n  ",ino1);
    }
    else
    {
        printf("Maximum Is : %d \n   ",ino2);
    }
    
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    Maximum(iValue1,iValue2);

   
    
    
    return EXIT_SUCCESS;
}