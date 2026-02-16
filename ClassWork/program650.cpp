#include<iostream>
using namespace std;

void Display()
{       
    static int i = 1;            // ISSUE RESOLVE
    
    if(i<=4)
    {
        cout<<i<<"\n";
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}
