#include<iostream>
using namespace std;
 
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int no);
        ~ArrayX();
        void Accept();
        void Display();
        int Addition();
        int Maximum();
        int Frequncy(int);
           
};

ArrayX::ArrayX(int no)
{
    cout<<"Inside constructor\n";
    iSize = no;
    Arr = new int[iSize];            
}

ArrayX::~ArrayX()
{
    cout<<"Inside Destructor\n";
    delete []Arr;
}

void ArrayX::Accept()
{
    int iCnt = 0;

    cout<<"Enter the elements :\n";

    for(iCnt = 0;iCnt <= iSize;iCnt++)
    {
        cin>>Arr[iCnt];
    }

}

void ArrayX::Display()
{
    int iCnt = 0;

    cout<<"Elements of the array is:\n";

    for(iCnt = 0;iCnt <= iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    cout<<"\n";
}

int ArrayX::Addition()
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int ArrayX :: Maximum()
{
    int iMax = 0;
    int iCnt = 0;

    iMax = Arr[0];

    for(iCnt = 0;iCnt< iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax);
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int ArrayX :: Frequncy(int iNo)
{
    int iCnt = 0 ;
    int iCount = 0;

    for(iCnt = 0; iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]== 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
 //   ArrayX aobj(10);             //static
    int iValue = 0;
    cout<<"Enter the number of elements:\n";
    cin>>iValue;
 // step 1 : Allocate the memory
    ArrayX *aobj = new ArrayX(iValue);

// step 2 : use the memory
    aobj->Accept();
    aobj->Display();

    cout<<"Summation of all elements :"<<aobj->Addition()<<"\n";
    cout<<"Maximum is :"<<aobj->Maximum()<<"\n";
    cout<<"Maximum is :"<<aobj->Frequncy(11)<<"\n";

// step 3 : Deallocate the memory
    delete aobj;

    return 0;
}