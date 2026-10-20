//take input from user and chec  no is divisible by 3 and 5 or not
/*


-------------------------------------------
        Operation &&
--------------------------------------------
    Result 1  Result2   Final Result
--------------------------------------------
    True        True    True
    True        False   False
    False       True    False
    False       False   False 

--------------------------------------------


*/

#include <stdio.h>
#include <stdlib.h>


void Checkdivisible(int iNo)
{
    if (((iNo % 5) == 0) && ((iNo % 3) ==0))
    {
        printf(" %d is divisible by both",iNo);
    }
    else
    {
        printf("%d is not divisible any no",iNo);
    }
    

}
int main()
{

    int iValue = 0;

    printf("enter no : \n");
    scanf("%d",&iValue);

    Checkdivisible(iValue);


    return EXIT_SUCCESS;
}