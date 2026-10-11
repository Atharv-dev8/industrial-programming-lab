#include <stdio.h>
#include <stdlib.h>

int main()
{

     int ret =0;
     int no =0;

    printf("Enter number : \n");            //return value of print f is int
    ret = scanf("%d",&no);                  //return value of scanf is 1 for int for other it 0


    printf("return value is : %d\n",ret);

    return EXIT_SUCCESS;
}