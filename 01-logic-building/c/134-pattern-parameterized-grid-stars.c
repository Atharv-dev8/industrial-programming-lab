/*
  input: no of rows -> 3 , no of columns ->5
  output :*	*	*	*	*	

          *	*	*	*	*	

          *	*	*	*	*	

*/

#include <stdio.h>
#include <stdlib.h>

void Pattern(int iRows,int iColumns)
{
  int i,j = 0;
  
for(i=1;i<=iRows;i++)
{
    for(j = 1;j<=iColumns;j++)
    {
      printf("*\t");
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