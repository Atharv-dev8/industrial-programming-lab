/*
  input: no of rows -> 4 , no of columns ->4
output :
        ABCD
        ABCD
        ABCD
        ABCD

*/

#include <stdio.h>
#include <stdlib.h>

void Pattern(int iRows,int iColumns)
{
  int i,j = 0;
  char ch = '\0';
  
for(i=1;i<=iRows;i++)
{

    for(j = 1,ch='A';j<=iColumns;j++,ch++)
    {
      printf("%c\t",ch);
    }
    
    printf("\n\n");
  }
}

int main()
{
    int iValuee1,iValue2 = 0;

    printf("Enter Number Of Rows ");
    scanf("%d",&iValuee1);

    printf("Enter Number Of Columns");
    scanf("%d",&iValue2);

    Pattern(iValuee1,iValue2);

    return EXIT_SUCCESS;
}