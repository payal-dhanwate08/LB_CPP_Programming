// Input 4
// output  4    3   2   1

#include<iostream>
using namespace std;             //without static recursion is allow but parameter is must

void Display(int iNo)
{       
   if(iNo >= 1)
   {
        cout<<iNo<<"\n";
        iNo--;
        Display(iNo);
   }
}

int main()
{
    Display(3);

    return 0;
}
