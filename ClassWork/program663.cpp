// Input 4
// output  1+2+3+4 = 10

#include<iostream>
using namespace std;             

int Factorial(int iNo)
{       
    static int ifact = 1;

    if(iNo >= 1)
    {
        ifact = ifact * iNo;
        Factorial(iNo--);            // POST decrement
    }
    return ifact;
}

int main()
{
    int iRet = 0;

    iRet = Factorial(4);

    cout<<iRet<<"\n";

    return 0;
}
