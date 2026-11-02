#include <iostream>
using namespace std;

class Arithmatic
{
    public: 
        float No1;
        float No2;

        Arithmatic(float A, float B)
        {
            No1 = A;
            No2 = B;
        }

        float Addition()
        {
            float Ans = No1 + No2;
            return Ans;
        }
};
int main()
{

    Arithmatic aobj1(10.6f,11.6f);
    Arithmatic aobj2(20.6f,21.6f);

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    return EXIT_SUCCESS;
}