/*
step 1:understand the problem statement
step 2: write the algorithm
step 3: decide the programming language
step 4: write the program
step 5: test the program
*/


/////////////////////////////////////////////////////////
//  
//  step 1:understand the problem statement
//          user  is going to enter any 2 integers
//          and we have to perform addition
//
///////////////////////////////////////////////////////

/////////////////////////////////////////////////////////
// step 2: write the algorithm
/*
    START
        accept first no as no1
        accept second no as no2
        crate the variable as ans to store the result
        perform the addition and store into ans
        display the result from ans
    END
*/
/////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////
//  step 3: decide the programming language
//      we select c programming
/////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////
//  step 4: write the program
//
//////////////////////////////////////////////////////////////
#include <stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name:  addition
//  Input        :  Integer,Integer
//  Output       :  Integer
//  Description  :  perform addition
//  Date         :  04/10/2026
//  Author       :  Atharv Sukhadev Mahadik
//
//////////////////////////////////////////////////////////////

int addition(int ino1, int ino2)
{
    int iAns=0;

    iAns=ino1+ino2;          ///Buiseness logic
    return iAns;
}

//////////////////////////////////////////////////////////////
//
//  Entry point of application
//
//
//////////////////////////////////////////////////////////////

int main()
{
    int ivalue1=0, ivalue2=0,iResult;

    printf("Enter first no: \n");
    scanf("%d",&ivalue1);

    printf("Enter first no: \n");
    scanf("%d",&ivalue2);

    iResult = addition(ivalue1,ivalue2);

      
    
    printf("Addition is : %d\n",iResult);
    
    return 0;
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