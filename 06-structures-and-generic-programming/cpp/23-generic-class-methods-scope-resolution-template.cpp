#include <iostream>
using namespace std;

//if class is Generic then by default all method of it become generic 

template <class T>

class Arithmatic            //template <class T> this template header is for class
{
    public: 
        T No1;
        T No2;
        Arithmatic(T A, T B);
   

        T Addition();
   

        T Substraction();
       
   
};

template <class T>
Arithmatic <T> :: Arithmatic(T A, T B)   
{
    No1 = A;
    No2 = B;
}

template <class T>
T Arithmatic <T> :: Addition()     //template <class T> this template header is for Addition Function
{
    T Ans = No1 + No2;
    return Ans;
}

template <class T>
T  Arithmatic <T> :: Substraction()   
{
    T Ans = No1 - No2;
    return Ans;
}

int main()
{
    Arithmatic <int> *aobj = new Arithmatic  <int> (11,10);            
    

    cout<<aobj -> Addition()<<endl;
    
    return EXIT_SUCCESS;
}