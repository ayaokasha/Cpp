#include <iostream>
using namespace std;

// operator overloading

class Cal
{
    int a = 10, b = 20;

public:
    Cal operator-(Cal &c) // operator-
    {
        Cal result;
        result.a = this->a - c.a;
        result.b = this->b - c.b;
        return result;
    }
    Cal operator+(Cal &c1) // operator+
    {
        Cal sum;
        sum.a = this->a + c1.a;
        sum.b = this->b + c1.b;
        return sum;
    }
    Cal operator++(int) // x++
    {
        Cal pos;
        pos.a++;
        pos.b++;
        return *this;
    }
    Cal operator++() // ++x
    {
        this->a++;
        this->b++;
        return *this;
    }
    Cal operator--(int) // x--
    {
        Cal posm;
        posm.a--;
        posm.b--;
        return *this;
    }
    Cal operator--() //--x
    {
        this->a--;
        this->b--;
        return *this;
    }
    Cal operator+=(int x)
    {
        this->a += x;
        this->b += x;
        return *this;
    }
    Cal operator!()
    {
        this->a = !this->a;
        this->b = !this->b;
        return *this;
    }
    bool operator!=(Cal &c) // oo vid 1:29:00
    {
        return (this->a != c.a && this->b != c.b);
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
    friend void print(Cal &c); // to accsses the class in func outside the class
    friend istream &operator>>(istream &is, Cal &c);
    friend ostream &operator<<(ostream &os, Cal &c);
    int get_a() { return a; }
    int get_b() { return b; }
};

void print(Cal &c)
{
    cout << c.a << c.b;
}
// istream &operator>>() // oo vid 1:56
// istream to cin an object
istream &operator>>(istream &is, Cal &c)
{
    is >> c.a >> c.b;
    return is;
}
// ostream &operator<<
ostream &operator<<(ostream &os, Cal &c)
{
    os << c.a << c.b;
    return os;
}
int main()
{
    Cal a1;
    Cal a2;
    cin >> a1;                               // istream
    cout << a1.get_a() << " " << a1.get_b(); // istream
    // Cal c1 = a1 - a2; // a1.operator-(a2)
    // c1.show();        // 0 0
    // Cal c2 = a2 + a1; // a2.operatoe+(a1)
    // c2.show();        // 20 40
    // Cal b = a1++;     // postfix >sum first then print
    // b.show();         // 10 20
    // Cal b1 = ++a1;    // prefix  >print first then sum
    // b1.show();        // 11 21
    // Cal b2 = a1--;
    // b2.show(); // 10 20
    // Cal b3 = --a1;
    // b3.show(); // 9 19
    // a1 += 9;
    // a1.show();
    // Cal x = !a1;
    // x.show();
}