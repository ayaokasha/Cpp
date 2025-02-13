#include <iostream>
#include <string>
using namespace std;

// inheritance (is a), class takes a copy from other class

class Person // perant
{
protected: // the values can be accssesd in the sub classes only
    string name;
    int age;

public:
    Person() {}
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
    string getname() { return name; }
    int getage() { return age; }
    void setname(string n) { name = n; }
    void setage(int a) { age = a; }
};
class Student : public Person // child
{
    float gpa;
    string major;

public:
    Student(string n, int a, float g, string m) : Person(n, a) // delegated constructor , only in child
    {
        gpa = g;
        major = m;
    }
    float getgpa() { return gpa; }
    string getmajor() { return major; }
    void setgpa(float g) { gpa = g; }
    void setmajor(string m) { major = m; }
};
class Teacher : public Person
{
protected:
    string level;
    string subject;

public:
    Teacher() {} // empty constracur
    Teacher(string n, int a, string l, string s) : Person(n, a)
    {
        level = l;
        subject = s;
    }
    string getlevel() { return level; }
    string getsubject() { return subject; }
};
class Mathteacher : public Teacher // grandson class
{
    string classes_;

public:
    Mathteacher(string n, int a, string l, string s, string c) // can't accsses perant class directly
        : Teacher(n, a, l, s)                                  // can be accssesd by the child class
    {
        classes_ = c;
    }
    string getclasses_() { return classes_; }
};

// to serch
// virtual inheritance for dimonde problem
class A
{
protected:
};
class B : virtual public A
{
protected:
};
class C : virtual public A
{
protected:
};
class D : public B, public C
{
};

// composition (has a)
class Author
{
    string name;
    string email;
    char gender;
};
class Book
{
    string name;
    Author author;
    double price;
    int qty;

public:
    Book() { qty = 0; }
    Book(string n, Author &a, double p, int q) : name(n), author(a), price(p), qty(q) {}
};
int main()
{
    Student s("aya", 25, 3, "cpp");
}