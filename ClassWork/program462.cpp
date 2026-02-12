#include<iostream>
using namespace std;

template <class T>
T Addition(T No1,T No2)
{
    T Ans;
    Ans = No1+No2;
    return Ans;
}

int main()
{
    cout<<"Addition of charactoers :"<<Addition('a','b')<<"\n";
    cout<<"Addition of integer :"<<Addition(10,11)<<"\n";
    cout<<"Addition of float :"<<Addition(90.3f,78.5f)<<"\n";
    cout<<"Addition of double :"<<Addition(45.9876,78.98765)<<"\n";

    return 0;
}