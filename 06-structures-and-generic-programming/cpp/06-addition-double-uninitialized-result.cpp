#include <iostream>
using namespace std;

double Addition(double No1, double No2)
{
    double Ans;

    Ans = No1 + No2;

    return Ans;
}
int main()
{
    double iValue1 = 0.0, iValue2 = 0.0;
    double iRet = 0.0;

    cout<<"Enter First Number : \n";
    cin>>iValue1;

    cout<<"Enter Second Number : \n";
    cin>>iValue2;

    iRet = Addition(iValue1,iValue2);

    cout<<"Addition Is : "<<iRet<<"\n";


    return EXIT_SUCCESS;
}