#include <iostream>
using namespace std;

template <class T>

class Arithmatic
{
    public: 
        T No1;
        T No2;

        Arithmatic(T A, T B)
        {
            No1 = A;
            No2 = B;
        }

        T Addition()
        {
            T Ans = No1 + No2;
            return Ans;
        }

        T Substraction()
        {
            T Ans = No1 - No2;
            return Ans;
        }
};
int main()
{

    Arithmatic aobj1(10.6,11.6);  //ERROR
    
    cout<<aobj1.Addition()<<"\n";
    cout<<aobj1.Substraction()<<"\n";
   
    return EXIT_SUCCESS;
}