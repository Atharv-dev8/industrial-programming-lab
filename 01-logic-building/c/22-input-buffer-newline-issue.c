#include <stdio.h>
#include <stdlib.h>

int main()
{

    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter Your Name : \n  ");
    scanf("%[^'\n']s",sName);           //enter(\n) remains in input buffer
    
    printf("Enter your age : \n");
    scanf("%d",&iAge);

    printf("Enter your markd : \n");
    scanf("%f",&fMarks);

    printf("Welcome %s \n",sName); 
    printf("your age is : %d \n",iAge); 
    printf("your marks is : %f \n",fMarks);     
    

    return EXIT_SUCCESS;
}