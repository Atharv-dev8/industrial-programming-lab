/*
    Input : 4
    Output :  ABCD
*/


#include <stdio.h>
#include <stdlib.h>

void Pattern(int iNo)
{
  int iCnt = 0;
  char ch = '\0';
  
  ch= 'A';

  for(iCnt =1;iCnt<=iNo;iCnt++)
  {
    printf("%c\t",ch);
    ch++;
  }
  printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter The Value : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}