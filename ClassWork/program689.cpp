// Input : 5
// Output : 1   2   3   4   5

#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;

    if(i <= 5)
    {
        cout<<i<<"\t";
        i++;
        Display(iNo);
    }
    cout<<"\n";
    
}

int main()
{
    int iValue = 0;

    cout<<"Enter number :\n";
    cin>>iValue;

    Display(iValue);

    return 0;
}