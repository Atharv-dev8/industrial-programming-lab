#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Arr[100];

    printf("Enter String : \n");
    //scanf("%[^\n]",Arr);     
    fgets(Arr,sizeof(Arr),stdin);
            //kuth \\kiti  \\kiti 

    printf("Entered String is: %s\n",Arr);

    return EXIT_SUCCESS;
}