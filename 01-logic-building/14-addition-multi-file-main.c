#include "Header.h"

//////////////////////////////////////////////////////////////
//
//        Entry point of application
//
//
//////////////////////////////////////////////////////////////

int main()
{
    int ivalue1=0, ivalue2=0,iResult;

    printf("Enter first no: \n");
    if(scanf("%d",&ivalue1)!=1)
    {
        fprintf(stderr,"unable to proceed as input is invalid  \n");

        return EXIT_FAILURE;
    }

    printf("Enter first no: \n");
    if(scanf("%d",&ivalue2)!=1)
    {
        fprintf(stderr,"unable to proceed as input is invalid  \n");

        return EXIT_FAILURE;
    }
    iResult = addition(ivalue1,ivalue2);

      
    
    printf("Addition is : %d\n",iResult);
    
    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////
//  
//      step 5: test the program
//
//      Tested Test Cases
//
//----------------------------------------------------
//      Input1      Input2          output
//  ---------------------------------------------------    
//      10            11            21
//      11            0             11
//      0             11            11
//      20            -9            11
//      -9            20            11
//      -20           11            -9
//
//
//////////////////////////////////////////////////////////////