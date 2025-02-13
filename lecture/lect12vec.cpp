#include <iostream>
#include <vector>
using namespace std;

// data structure:
// vectors (capacity , size)
// linked list(sll,dll,cll)
// stack
// queue
// tree

// insert,remove,serach,traverse
template <class t>
class Vector
{
    int size, cap;
    t *arr;
    void expand()
    {
        cap *= 2;
        t *temp = new t[cap];
        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
    }

public:
    Vector()
    {
        size = 0;
        cap = 4;
        arr = new t[cap];
    }
    // insertion
    void insertlast(t element)
    {
        if (size == cap)
        {
            expand();
        }
        size++;
    }
    void insertfirst(t element)
    {
        if (size == cap)
        {
            expand();
        }
        for (int i = size - 1; i > 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = element;
        size++;
    }
    void insertat(t element, int index)
    {
        if (size == cap)
        {
            expand();
        }
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        size++;
    }
    // deletion
    void deletelast()
    {

        size--;
    }
    void deletefirst()
    {

        for (int i = 1; i < size - 1; i++)
        {
            arr[i - 1] = arr[i];
        }
        size--;
    }
    void deleteat(int index)
    {
        for (int i = index; i < size - 1; i++)
        {
            arr[i - 1] = arr[i];
        }
        size--;
    }
    // searching
    bool search(t element)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] == element)
            {
                return i;
            }
        }
        return -1;
    }

    // traversing
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    // Vector<int> v;
    // for (int i = 1; i <= 5; i++)
    // {
    //     v.insertlast(i);
    // }
    // v.print(); // 1 2 3 4 5

    // v.insertfirst(70); // 70 1 2 3 4 5
    // v.print();

    // v.deletefirst();
    // v.print();

    // v.deletelast();
    // v.print();

    // Vector<int> v = {1, 2, 3, 4, 5};
    // v.bush_back(8);
}