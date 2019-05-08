#include <iostream>
#include "IntegerList.h"

using namespace std;

    IntegerList::IntegerList()// empty list constructor
    {
        head=nullptr; //changing this did something
    }    
    IntegerList::~IntegerList()// destructor
    {
        IntListNode* current;
        current = head;
        while(current!=nullptr)
        {
            IntListNode*next = current->getNext();
            delete current;
            current = next;
        }
        current = nullptr;
    }    
    int IntegerList::front()    // return front element
    {
        IntListNode * current;
        current = head;
        int none = 0;
        if(current == nullptr) //if theres nothing in the list
        {
            cout << "nothing is in the list"<<endl;
            return none;
        }else
        {
            return(current->getElement());
        }
    }
    void IntegerList::addFront(int e)// add to front of list
    {
        IntListNode * temp;
        temp = new IntListNode(e,temp->getNext());
        
        if(head == nullptr)
        {
            temp->setNext(nullptr);
            head = temp; //head point to temp

        }
        else
        {
            temp->setNext(head); //set next to what head is point to 
            head = temp;
        }
        
    }
    
    void IntegerList::removeFront()   // remove front item list
    {
        IntListNode* cursor;
        cursor = head;
        if(cursor ==nullptr)
        {
            cout<< "List is already empty"<<endl;
            return; //exits loop
        }

        head = cursor->getNext();
        delete cursor;
        
    }
    void IntegerList::print() // print the list with head
    {
        IntListNode * cursor;
        cursor = head;
        while(cursor!=nullptr)
        {
            cout<< cursor->getElement()<< " ";
            cursor = cursor->getNext();
        }
        cout<<endl;

    }
    int IntegerList::size() const   // list size
    {
        int listSize = 0;
        //traverse the list
        IntListNode* cursor;
        cursor = head;
        while(cursor!=nullptr)
        {
            listSize++;
            cursor = cursor->getNext();
        }
        return listSize;
    }
    void IntegerList::AddAtPosition(int e, int p)
    {//adding e at position p
        
        IntListNode* temp;
        temp = new IntListNode(e, temp->getNext());

        //make current and prev pointers
        IntListNode* current;
        IntListNode* prev;

        current = head;
        
        for (int a = 1; a < p; a ++)
        {
            prev = current;
            current = current->getNext();
        }
        temp->setNext(current);
        prev->setNext(temp);

    }
    int  sum();   // returns the sum of the nodes in the list
    int  sum(IntListNode* node);   // recursive function, used by above function