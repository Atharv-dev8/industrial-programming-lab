//take input from user and chec  no is divisible by 3 or 5 or not
/*


-------------------------------------------
        Operation &&
--------------------------------------------
    Result 1  Result2   Final Result
--------------------------------------------
    True        True    True                Short Circuit
    True        False   True                Short Circuit
    False       True    True
    False       False   False 

--------------------------------------------


*/

#include <stdio.h>
#include <stdlib.h>


void Checkdivisible(int iNo)
{
    if (((iNo % 5) == 0) || ((iNo % 3) ==0))
    {
        printf(" %d is divisible ",iNo);
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