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
    Arithmatic <int> *aobj = new Arithmatic  <int> (11,10);            
    

    cout<<aobj -> Addition()<<endl;
    
    return EXIT_SUCCESS;
}