#include <iostream>
using namespace std;

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;

    return iAns;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout<<"Enter First Number : \n";
    cin>>iValue1;

    cout<<"Enter Second Number : \n";
    cin>>iValue2;

    iRet = Addition(iValue1,iValue2);

    cout<<"Addition Is : "<<iRet<<"\n";


    return EXIT_SUCCESS;
}