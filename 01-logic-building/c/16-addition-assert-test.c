#include "Header.h"


#include <assert.h>


int main()
{

    assert(addition(10,11) == 21);

    assert(addition(-10,20) == 10);
    
    
    assert(addition(-10,-20) == -30);



    return EXIT_SUCCESS;
}