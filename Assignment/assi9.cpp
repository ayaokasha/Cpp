#include <iostream>
using namespace std;
// Task 1
template <typename t1>
t1 maxnum(t1 a, t1 b)
{
    return (a > b) ? a : b;
}
// Task 2 -------------------
template <typename t2>
t2 swapv(t2 &a, t2 &b)
{
    t2 temp;
    temp = a;
    a = b;
    b = temp;
}
// Task 3 -------------------
template <typename t3>
class Cal
{
public:
    static t3 add(t3 a, t3 b) { return a + b; }
    static t3 sub(t3 a, t3 b) { return a - b; }
    static t3 mult(t3 a, t3 b) { return a * b; }
    static t3 divi(t3 a, t3 b)
    {
        if (b == 0)
        {
            throw out_of_range("error : division by zero\n");
        }
        return a / b;
    }
};
int main()
{
    // Task 1
    cout << maxnum<int>(10, 20) << endl;
    // // Task 2 -------------------
    int a = 5, b = 10;
    swapv(a, b);
    cout << a << " " << b << endl;
    // Task 3 -------------------
    cout << "Add: " << Cal<int>::add(10, 20) << endl;
    cout << "Subtract: " << Cal<int>::sub(20, 10) << endl;
    cout << "Multiply: " << Cal<int>::mult(10, 20) << endl;
    cout << "Divide: " << Cal<int>::divi(20, 10) << endl;
    // Task 4 -------------------
    int x = 10, y = 0;
    try
    {
        if (y == 0)
        {
            throw out_of_range("error : division by zero\n");
        }
        else if (y < 0)
        {
            cout << x / y << endl;
        }
    }
    catch (exception &e)
    {
        cout << e.what();
    }
}