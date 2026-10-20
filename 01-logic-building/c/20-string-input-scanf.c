#include <stdio.h>
#include <stdlib.h>

int main()
{

    char sName[30];

    printf("Enter Your Name : ");
    scanf("%s",sName);              //scanf is a function it take inputr till first void space

    printf("Welcome %s \n",sName);      //name of array is internally consider as its base address

    return EXIT_SUCCESS;
}