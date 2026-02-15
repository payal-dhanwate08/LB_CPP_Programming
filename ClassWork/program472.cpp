#include<iostream>
using namespace std;
 
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int no)
        {
            cout<<"Inside constructor\n";
            iSize = no;
            Arr = new int[iSize];            
        }

        ~ArrayX()
        {
            cout<<"Inside Destructor\n";
            delete []Arr;
        }
    
};

int main()
{
 //   ArrayX aobj(10);             //static

 // step 1 : Allocate the memory
    ArrayX *aobj = new ArrayX(10);

// step 2 : use the memory
     // logic

// step 3 : Deallocate the memory
    delete aobj;

    return 0;
}