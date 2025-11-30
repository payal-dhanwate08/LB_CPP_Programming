#include<iostream>
using namespace std;

void Display()
{
    auto iCnt = 0;       //Auto storage class

    cout<<"Jay ganesh..."<<iCnt<<"\n";
    iCnt++;
    Display();

}

int main()
{
    Display();

    return 0;
}