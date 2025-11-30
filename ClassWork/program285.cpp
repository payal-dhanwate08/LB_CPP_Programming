#include<iostream>
using namespace std;

void Display()
{
    int iCnt = 0;            //Auto storage class

    cout<<"Jay ganesh..."<<iCnt<<"\n";
    iCnt++;
    Display();

}

int main()
{
    Display();

    return 0;
}