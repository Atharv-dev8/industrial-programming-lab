#include <iostream>
using namespace std;

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout<<"Enter First Number : \n";
    cin>>iValue1;

    cout<<"Enter Second Number : \n";
    cin>>iValue2;

    iRet = iValue1 + iValue2;

    cout<<"Addition Is : "<<iRet<<"\n";


    return EXIT_SUCCESS;
}