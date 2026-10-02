#include<iostream>
using namespace std;

int main()
{
    int isPrime = true;
    int n = 7;

    for(int i = 2; i * i <= n; i++)    
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime == true)
    {
        cout<< "its prime number\n";
    }
    else
    {
        cout<< "not prime\n";
    }


    return 0;
}