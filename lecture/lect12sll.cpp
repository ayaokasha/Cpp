#include <iostream>
using namespace std;

// single linked list

// insert first
// 1.create new node
// 2.set value of new node
// 3.next of new nod point to head
// head = new node

struct Node //
{
    int item;   // element of the node
    Node *next; // pointer to the next node
    ~Node()     // destructor to avoid memory leak
    {
        delete next;
    }
};
class Sll // singly linked list
{
    Node *head; // pointer to the first node
    Node *tail; // pointer to the last node
    int size;

public:
    Sll()
    {
        head = nullptr;
        size = 0;
    }
    // insertion
    void insertfirst(int element)
    {
        Node *newnode = new Node; // create new node
        newnode->item = element;  // set value of new node
        if (size == 0)
        {
            newnode->next = nullptr; // next of new node point to null
            head = tail = newnode;
        }
        else
        {
            newnode->next = head; // next of new node point to head
            head = newnode;
        }
        size++;
    }
    void insertlast(int element)
    {
        Node *newnode = new Node;
        newnode->item = element;
        if (size == 0)
        {
            newnode->next = nullptr;
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void insertat(int element, int idx)
    {
        if
    }
    // delete first
    // 1.creat a new ptr current and set it to head
    // 2.move head to the next node
    // 3.delete current
    // 4.delete head ptr
    void deletefirst()
    {
        if (size == 0)
        {
            delete head;
            head->next = nullptr;
        }
        Node *cur = head;
        head = head->next;
        cur->next = nullptr;
        delete cur;
    }
    // delete last
    // 1.create a ptr to current and previos and set them to head
    // 2.loop until current is not null
    // 3.move tail to the previous node
    // 4.delete current
    void deletelast()
    {
        Node *cur = head->next;
        Node *prev = head;
        while (cur->next != nullptr)
        {
            cur = cur->next;
            prev = prev->next;
        }
        tail = prev;
        delete cur;
        tail->next = nullptr;
    }
    // searching
    bool search(int element)
    {
        Node *cur = head;
        while (cur != nullptr)
        {
            if (cur->item == element)
            {
                return true;
            }
            cur = cur->next;
        }
        return false;
    }
    // traversing
    void print()
    {
        Node *cur = head;
        while (cur != nullptr)
        {
            cout << cur->item << " \n";
            cur = cur->next;
        }
        cout << endl;
    }
};

int main()
{
    Sll s1;
    s1.insertfirst(1);
    s1.insertlast(4);
    s1.deletelast();

    s1.print();
}