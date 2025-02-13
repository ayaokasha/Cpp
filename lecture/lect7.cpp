#include <iostream>
#include <string>
using namespace std;

// OOP

class Students
{

private:
    string name;
    int id;
    string major;
    float gpa;

public:
    float totalg(float course1, float course2, float course3)
    {
        return course1 + course2 + course3;
    }
    void getdata()
    {
        cout << "please enter name" << endl;
        getline(cin, name);
        cout << "please enter id" << endl;
        cin >> id;
        cin.ignore(); // عشان تسكيب المسافه الي بعد الجيت لاين
        cout << "please enter gpa" << endl;
        cin >> gpa;
        cout << "please enter major" << endl;
        getline(cin, name);
    }
    void printd()
    {
        cout << "name :" << name << endl
             << "id :" << id << endl
             << "gpa :" << gpa << endl
             << "major :" << major << endl;
    }

    Students *return_this()
    { // pointer for the objects
        return this;
    }

    // calling privet var in class
    void set_name(string n) // setter
    {
        this->name = n; // pointer
    }

    int get_id() // getter
    {
        return id;
    }
    void set_major(string m) // setter
    {
        major = m;
    }
    int get_gpa() // getter
    {
        return gpa;
    }
};

// q1
// class Student
// {
// private:
//     string name;
//     int id;
//     float grades;

// public:
//     string get_name()
//     {
//         cin >> name;
//         return name;
//     }

//     int set_id(int i)
//     {
//         id = i;
//     }

//     float set_grade(float g)
//     {
//         grades = g;
//     }

//     void printinfo()
//     {
//         cout << "name : " << name << endl
//              << "id : " << id << endl
//              << "grades : " << grades << endl;
//     }
// };

// EX2

class Students
{

private:
    string name;
    string major;
    int id;
    float gpa;

public:
    // empty constructor
    // Students()
    // {
    //     name = {};
    //     major = {};
    //     id = 0;
    //     gpa = 3.4;
    //     cout << "hello";
    // }
    // to search
    // move constructor (lvalue,rvalue),(move sint )
    // static keyword

    // paramitar constructor

    Students(string n, int i, float g)
    {
        name = n;
        id = i;
        gpa = g;
        cout << "Welcom\n";
    }
    // copy constructor

    Students(Students &s)
    {
        name = s.name;
        major = s.major;
        id = s.id;
        gpa = s.gpa;
    }

    void getdata()
    {
        cout << "please enter name" << endl;
        getline(cin, name);
        cout << "please enter id" << endl;
        cin >> id;
        cin.ignore();
        cout << "please enter gpa" << endl;
        cin >> gpa;
        cout << "please enter major" << endl;
        getline(cin, name);
    }

    void printd()
    {
        cout << "name :" << name << endl
             << "id :" << id << endl
             << "gpa :" << gpa << endl
             << "major :" << major << endl;
    }

    // distractor
    ~Students()
    {
        cout << "Bye\n";
    }
};
int main()
{
    // Students s; // object
    // // setter calling
    // s.set_name("aya");
    // s.set_major("cs");
    // // getter calling
    // cout << endl
    //      << s.get_id();
    // cout << endl
    //      << s.get_gpa();

    // s.getdata();
    // s.printd();

    // Q1

    // Students s1;
    // cout
    //     << s1.get_name() << endl;
    // s1.set_id(552);
    // s1.set_grade(100);
    // s1.printinfo();

    // EX2

    Students s("aya", 478549, 3.4);
}
