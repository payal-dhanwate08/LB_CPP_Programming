/////////////////////////////////////////////////////////////////////
// final code of Doubly linear linked list using Generic Aproche
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)
template <class T>
class DoubleyLLLnode
{
    public:
        T data;
        DoubleyLLLnode * next;
        DoubleyLLLnode * prev;

        DoubleyLLLnode(T no)
        {
            this->data = no;
            this->next = NULL;
            this->prev = NULL;
        }
};

template <class T>
class DoublyLLL
{
        private:
            DoubleyLLLnode<T> * first;
            int iCount;

        public:
            DoublyLLL();

            void InsertFirst(T);
            void InsertLast(T);
            void InsertAtPos(T ,int);

            void DeleteFirst();
            void DeleteLast();
            void DeleteAtPos(int);

            void Disply();
            int Count();

};

template <class T>
DoublyLLL<T>::DoublyLLL()
{
    cout<<"Linked list gets created\n";

    this->first = NULL;
    this->iCount = 0;
}

template <class T>
void DoublyLLL<T>:: InsertFirst(T no)
{
    DoubleyLLLnode<T> * newn = NULL;
    newn = new DoubleyLLLnode<T>(no);

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;
        this->first = newn;

    }
    this->iCount++;
}

template <class T>
void DoublyLLL<T>:: InsertLast(T no)
{
    DoubleyLLLnode<T> * newn = NULL;
    DoubleyLLLnode<T> * temp = NULL;
    newn = new DoubleyLLLnode<T>(no);

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
       temp = this->first;

       while(temp->next != NULL)
       {
            temp = temp->next;
       }
       temp->next = newn;
       temp->prev = temp;

    }
    this->iCount++;
}

template <class T>
void DoublyLLL<T>:: InsertAtPos(T no ,int pos)
{
    DoubleyLLLnode<T> * temp = NULL;
    DoubleyLLLnode<T> * newn = NULL;
    int iCnt = 0;

    if(pos < 1 || (pos > this->iCount+1))
    {
        cout<<"Invalide position";
        return;
    }
    if(pos == 1)
    {
        this->InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        this->InsertLast(no);
    }
    else
    {
        newn = new DoubleyLLLnode<T>(no);
        temp = first;

        for(iCnt = 1; iCnt < pos-1;iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        this->iCount++;
    }
}

template <class T>
void DoublyLLL<T>:: DeleteFirst()
{

    if(this->first == NULL)                       
    {
        return;
    }
    else if(this->first->next == NULL)           
    {
        delete this->first;
        this->first = NULL;
    }
    else                                          
    {
        this->first = this->first->next;
        delete this->first->prev;
        this->first->prev = NULL;
    }
    this->iCount--;
}

template <class T>
void DoublyLLL<T>:: DeleteLast()
{

    DoubleyLLLnode<T> * temp = NULL;

    if(this->first == NULL)                       
    {
        return;
    }
    else if(this->first->next == NULL)           
    {
        delete this->first;
        this->first = NULL;
    }
    else                                         
    {
        temp = this->first;

        while(temp->next->next != NULL)
        {
            temp =  temp->next;
        }
        delete temp->next;
        temp->next = NULL;

    }
    this->iCount--;
}

template <class T>
void DoublyLLL<T>:: DeleteAtPos(int pos)
{
    DoubleyLLLnode<T> * temp = NULL;
    int iCnt = 0;

    if(pos < 1 || (pos > this->iCount))
    {
        cout<<"Invalide position";
        return;
    }
    if(pos == 1)
    {
        this->DeleteFirst();
    }
    else if(pos == iCount)
    {
        this->DeleteLast();
    }
    else
    {
        temp = first;
        
        for(iCnt = 1; iCnt < pos-1;iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        this->iCount--;
    }
}

template <class T>
void DoublyLLL<T>:: Disply()
{
    DoubleyLLLnode<T> * temp = NULL;
    temp = this->first;

    cout<<"\nNULL<=>";
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|<=>";
        temp = temp->next;
    }
    cout<<"NULL\n";

}

template <class T>
int DoublyLLL<T>:: Count()
{
    return this->iCount;
}

int main()
{
    DoublyLLL<char> *dobj = new DoublyLLL<char>();

    dobj->InsertFirst('A');
    dobj->InsertFirst('B');
    dobj->InsertFirst('C');

    dobj->Disply();

    cout<<"Numbers of elements are :"<<dobj->Count()<<"\n";

    dobj->InsertLast('x');
    dobj->InsertLast('y');
    dobj->InsertLast('z');

    dobj->Disply();

    cout<<"Numbers of elements are :"<<dobj->Count()<<"\n";

    dobj->DeleteFirst();

    dobj->Disply();

    cout<<"Numbers of elements are :"<<dobj->Count()<<"\n";

    dobj->DeleteLast();

    dobj->Disply();

    cout<<"Numbers of elements are :"<<dobj->Count()<<"\n";

    dobj->InsertAtPos('$',4);

    dobj->Disply();

    cout<<"Numbers of elements are :"<<dobj->Count()<<"\n";

    dobj->DeleteAtPos(4);

    dobj->Disply();

    cout<<"Numbers of elements are :"<<dobj->Count()<<"\n";

    delete dobj;
    
    return 0;
}
