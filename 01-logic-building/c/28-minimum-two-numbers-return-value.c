#include <stdio.h>
#include <stdlib.h>

int Minimum(
            int ino1,   
            int ino2
           )
{
     if (ino1<ino2)
    {
        return ino1;
    }
    else
    {
        return ino2;
    }
}
int main()
{
    int iValue1=0,iValue2=0,iAns=0;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

   iAns = Minimum(iValue1,iValue2);

   printf("Minimum Is: %d\n",iAns);

    
    
    return EXIT_SUCCESS;
}