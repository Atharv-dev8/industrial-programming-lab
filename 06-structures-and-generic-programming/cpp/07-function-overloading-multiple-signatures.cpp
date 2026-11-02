#include <iostream>
using namespace std;

double Addition(double No1, double No2)
{
    double Ans;

    Ans = No1 + No2;

    return Ans;
}

float Addition(float No1, float No2)
{
    float Ans;

    Ans = No1 + No2;

    return Ans;
 }
 
int Addition(int No1, int No2)
{
    int Ans;

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