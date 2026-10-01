// explicit conversion big to small

#include<iostream>
using namespace std;

int main()
{
    double price = 100.99;

    int newprice = (int)price;     
    cout<< newprice << "\n";
    return 0;
}