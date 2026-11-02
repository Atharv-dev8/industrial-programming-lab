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
    Arithmatic *aobj = new Arithmatic(11,10);

    cout<<aobj -> Addition()<<endl;

    return EXIT_SUCCESS;
}