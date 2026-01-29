// singly Circular

#include<iostream>
using namespace std;

template <class T>
struct node 
{
    T data ;
    struct node<T> * next;
};

template <class T>
class SinglyCLL
{
    private:
        struct node * first;
        struct node * last;
        int iCount;
    
    public:
           SinglyCLL();
            void InsertFirst(int no);
            void InsertLast(int no);
            void DeleteFirst();
            void DeleteLast();
            void DeleteAtPos(int pos);
            void InsertAtPos(int no , int pos);
            void DeleteAtPos();

            void Display();
            int Count();
            
};

template <class T>
SinglyCLL::SinglyCLL()
{
    cout<<"Inside constructor of SinglyCLL\n";
    this->first = NULL;
    this->last =  NULL;
    this->iCount = 0;

}

template <class T>
void SinglyCLL :: InsertFirst(int no)
{
    struct node * newn = NULL;
    newn = new struct node;

    newn->data = no;
    newn->next = NULL;

    if((first) == NULL && (last) == NULL)            //if(iCount == 0)
    {
        first = newn;
        last = newn;

        last->next = first;
    }
    else
    {
        newn->next = first;
        first = newn;

        last->next = first;

    } 
    iCount++;

}

template <class T>
void SinglyCLL :: InsertLast(int no)                 
{
    struct node * newn = NULL;
    newn = new struct node;

    newn->data = no;
    newn->next = NULL;

    if((first)==NULL && (last)== NULL)               //if(iCount == 0)
    {
        first = newn ;
        last = newn;

        last->next = first;

    }
    else
    {
        last->next = newn;
        last = newn;

        last->next = first;

    }
   
    iCount++;
}

template <class T>
void SinglyCLL :: DeleteFirst()
{
    if((first)==NULL && (last)==NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete(first);

        first = NULL;
        last = NULL;
    }
    else
    {
        
        first = first->next;
        delete last->next;

        last->next = first;
    }

    this->iCount--;
}

template <class T>
void SinglyCLL :: DeleteLast()
{

    struct node * temp = NULL;
    if((first)==NULL && (last)== NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete(first);
        first = NULL;
        last = NULL;
    }
    else
    {
        temp = first;
        while(temp->next != last)
        {
            temp = temp->next;

        }
        delete last;
        last = temp;
        last->next = first;
    }

    this->iCount--;
}


template <class T>
void SinglyCLL :: Display()
{
    if((first)==NULL && (last)== NULL)
    {
        return;
    }

    struct node * temp = first;

    do
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;

    } while (temp != last->next);
    cout<<"\n";
    
}

template <class T>
int SinglyCLL :: Count()
{
    return this->iCount;
}

template <class T>
void SinglyCLL :: InsertAtPos(int no , int pos)
{
    struct node * newn = NULL;
    struct node * temp = NULL;

    int iCnt  = 0;

    if((pos < 1)|| (pos > this->iCount+1))
    {
        cout<<"Invalid Position\n";
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
        newn = new struct node;
        newn->data = no;
        newn->next = NULL;

        temp = first;


        for(iCnt = 1 ; iCnt < pos-1 ; iCnt++)
        {
        temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        this->iCount++;
    }

}

template <class T>
void SinglyCLL :: DeleteAtPos(int pos)
{
    
    struct node * temp = NULL;
    struct node * target = NULL;

    int iCnt  = 0;

    if((pos < 1)|| (pos > this->iCount))
    {
        cout<<"Invalid Position\n";
        return;

    }

    if(pos ==1)
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
        for(iCnt = 1; iCnt < pos-1 ; iCnt++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target->next;
        delete target;

        this->iCount--;

    }
}


int main()
{

   
    SinglyCLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";


    obj.DeleteFirst();

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";

    obj.DeleteLast();

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";


    obj.InsertAtPos(105 ,4);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";

    obj.DeleteAtPos(4);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";

    return 0;
}

...............................................................
