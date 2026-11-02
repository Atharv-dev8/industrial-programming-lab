#include <iostream>
using namespace std;

class Arithmatic
{
    public: 
        double No1;
        double No2;

        Arithmatic(double A, double B)
        {
            No1 = A;
            No2 = B;
        }

        double Addition()
        {
            double Ans = No1 + No2;
            return Ans;
        }

        double Substraction()
        {
            double Ans = No1 - No2;
            return Ans;
        }
};
int main()
{

    Arithmatic aobj1(10.6,11.6);
    Arithmatic aobj2(20.6,21.6);

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    cout<<aobj1.Substraction()<<"\n";
    cout<<aobj2.Substraction()<<"\n";

    return EXIT_SUCCESS;
}