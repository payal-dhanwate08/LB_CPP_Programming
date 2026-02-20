// Input : 5
// Output : 1   2   3   4   5

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = iNo;

    while(iCnt >= 1)
    {
        cout<<iCnt<<"\t";
        iCnt--;
    }
    else
    {
        cout<<"\n";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number :\n";
    cin>>iValue;

    Display(iValue);

    return 0;
}