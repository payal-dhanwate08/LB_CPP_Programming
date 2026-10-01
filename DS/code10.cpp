// unary opretor  Increment or decrement

#include<iostream>
using namespace std;

int main()
{
    int a = 10 , d = 11 , e = 9;

    int b = a++;   // first print than updates
    cout<< b << "\n";  //10
    cout<< a << "\n"; // 11


    int c = ++a;   // first updates  print than
    cout<< c << "\n";  //11
    cout<< d << "\n"; // 10

    int f = a--;   // first print than updates
    cout<< f << "\n";  //10
    cout<< e << "\n"; // 9


    int B = --a;   // first updates  print than
    cout<< B << "\n";  //9
    cout<< e << "\n"; // 10


    return 0;
}