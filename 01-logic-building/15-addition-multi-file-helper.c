# include "Header.h"                    //why we write header file, if we have to find header file from system specified path
                                        //it return in angular bracket(< >) when the header file is into same file where our program is then 
                                        //we write in double quote

                                        
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

int addition(
    
                int ino1,               //first input
                int ino2                //second input
            )
{
    int iAns=0;

    iAns=ino1+ino2;          ///Buiseness logic
    return iAns;
}



