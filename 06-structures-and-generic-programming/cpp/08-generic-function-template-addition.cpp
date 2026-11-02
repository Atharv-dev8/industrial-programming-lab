#include <iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans;

    Ans = No1 + No2;

    return Ans;
}


int main()
{
    cout<<Addition(10,11)<<"\n";
    cout<<Addition(10.5f,11.3f)<<"\n";
    cout<<Addition(10.5,11.3)<<"\n";

    return EXIT_SUCCESS;
}