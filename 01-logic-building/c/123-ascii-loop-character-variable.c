
#include <stdio.h>
#include <stdlib.h>


int main()
{
  char ch ='\0';

  for(ch = 'A';ch<='Z';ch++)
  {
    printf("%d\t%o\t%x\t%c\t\n",ch,ch,ch,ch);
  }

    return EXIT_SUCCESS;
}