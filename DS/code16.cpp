#include<iostream>
using namespace std;

int main()
{
    int n = 10;
    int evensum = 0;


    for(int i = 1; i <=n; i++)
    {
        if(i%2 == 0)    
        {
            evensum += i;
       
        }
    }
    cout<< "evensum ="<< evensum <<"\n";

    return 0;
}