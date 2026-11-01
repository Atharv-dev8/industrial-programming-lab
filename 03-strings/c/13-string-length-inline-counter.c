#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Arr[20] = "Ganesh";
    char *ptr = NULL;
    int iCount = 0;
    ptr = &(Arr[0]);        

    while(*ptr !='\0')
    {
        iCount++;
        ptr++;
    }
  
    printf("Length Of String : %d\n",iCount);
   
  

    return EXIT_SUCCESS;
}