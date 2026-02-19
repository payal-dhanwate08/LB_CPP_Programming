// Input 4
// output  1+2+3+4 = 10

#include<iostream>
using namespace std;             

int Factorial(int iNo)
{       
    int ifact = 1;

    while(iNo >= 1)
    {
        ifact = ifact * iNo;
        iNo--;
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
