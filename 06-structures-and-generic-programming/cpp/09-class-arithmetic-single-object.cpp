#include <iostream>
using namespace std;

class Arithmatic
{
    public: 
        int No1;
        int No2;

        Arithmatic(int A, int B)
        {
            No1 = A;
            No2 = B;
        }

        int Addition()
        {
            int Ans = No1 + No2;
            return Ans;
        }
};
int main()
{

    Arithmatic aobj1(10,11);

    cout<<aobj1.Addition()<<"\n";

    return EXIT_SUCCESS;
}