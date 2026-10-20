#include <stdio.h>
#include <stdlib.h>

int main()
{

    char sName[30];

    printf("Enter Your Name : ");
    scanf("%[^'\n']s",sName);             //[^'\n'] = accept input till user press enter
     
    printf("Welcome %s \n",sName);      //name of array is internally consider as its base address

    return EXIT_SUCCESS;
}