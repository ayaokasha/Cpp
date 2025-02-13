#include <iostream>
#include <string>
using namespace std;

// Q1
class Circle
{
private:
    double radius;
    double pi = 3.141592653589793;
    string color;

public:
    Circle() : radius(1.0), color("red") {} // constructor initialization list
    Circle(double r) : radius(r) {}
    Circle(double r, string c) : radius(r), color(c) {}

    double getradius() { return radius; }
    string getcolor() { return color; }
    void setradius(double r) { radius = r; }
    void setcolor(string &c) { color = c; }
    double getarea() { return pi * radius * radius; }
};
// ----------------------------
// Q2
class Employee
{
private:
    int id;
    string fname;
    string lname;
    int salary;

public:
    Employee(int id, string fname, string lname, int salary) : id(id), fname(fname), lname(lname), salary(salary) {}

    int getid() { return id; }
    string getfname() { return fname; }
    string getlname() { return lname; }
    string getname() { return fname + " " + lname; }
    int getsalary() { return salary; }
    void setsalary(int nsalary) { salary = nsalary; }
    int getannual() { return salary * 12; }
    int raisesalary(int percent)
    {
        salary += salary * percent / 100;
        return salary;
    }
};
// ----------------------------
// Q3
class Account
{
private:
    string id;
    string name;
    int balance = 0;

public:
    Account(string id, string name)
        : id(id), name(name), balance(0) {}
    Account(string id, string name, int balance)
        : id(id), name(name), balance(balance) {}

    std::string getid()
    {
        return id;
    }
    std::string getname()
    {
        return name;
    }
    int getbalance()
    {
        return balance;
    }

    int credit(int amount)
    {
        balance += amount;
        return balance;
    }

    int debit(int amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Amount exceeded balance" << endl;
        }
        return balance;
    }

    int transfert(Account &another, int amount)
    {
        if (amount <= balance)
        {
            this->debit(amount);
            another.credit(amount);
        }
        else
        {
            cout << "Amount exceeded balance" << endl;
        }
        return balance;
    }
};
// ----------------------------
// Q4
class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time(int h, int m, int s) : hour(h), minute(m), second(s) {}

    int gethour() { return hour; }
    int getminute() { return minute; }
    int getsecond() { return second; }

    void sethour(int h) { this->hour = h; }
    void setminute(int m) { this->minute = m; }
    void setsecond(int s) { this->second = s; }
    void settime(int h, int m, int s)
    {
        this->hour = h;
        this->minute = m;
        this->second = s;
    }
    Time nextsecond()
    {
        ++second;
        if (second == 60)
        {
            second = 0;
            ++minute;
        }
        if (minute == 60)
        {
            minute = 0;
            ++hour;
        }
        if (hour == 24)
        {
            hour = 0;
        }
        return *this;
    }
    Time presecond()
    {
        --second;
        if (second < 0)
        {
            second = 59;
            --minute;
        }
        if (minute < 0)
        {
            minute = 59;
            --hour;
        }
        if (hour < 0)
        {
            hour = 23;
        }
        return *this;
    }

    void display()
    {
        cout << (hour < 10 ? "0" : "") << hour << ":"
             << (minute < 10 ? "0" : "") << minute << ":"
             << (second < 10 ? "0" : "") << second << endl;
    }
};
int main()
{
    // Q1
    Circle c1;
    Circle c2(2.5);
    Circle c3(3.0, "blue");

    cout << "radius = " << c1.getradius() << ", color = " << c1.getcolor() << ", area = " << c1.getarea() << endl;
    cout << "radius = " << c2.getradius() << ", color = " << c2.getcolor() << ", area = " << c2.getarea() << endl;
    cout << "radius = " << c3.getradius() << ", color = " << c3.getcolor() << ", area = " << c3.getarea() << endl;
    // ----------------------------
    // Q2
    Employee emp(1, "aya", "okasha", 5000);

    cout << "Employee ID: " << emp.getid() << endl;
    cout << "Name: " << emp.getname() << endl;
    cout << "Monthly Salary: " << emp.getsalary() << endl;
    cout << "Annual Salary: " << emp.getannual() << endl;

    emp.raisesalary(10);
    cout << "New Monthly Salary after 10% raise: " << emp.getsalary() << endl;
    cout << "New Annual Salary: " << emp.getannual() << endl;
    // ----------------------------
    // Q3
    Account acc1("123", "aya ", 1000);
    Account acc2("456", "mohamed ", 500);

    cout << acc1.getname() << "balance : " << acc1.getbalance() << endl;
    cout << acc2.getname() << "balance : " << acc2.getbalance() << endl;

    acc1.credit(100);
    cout << "After crediting 100, " << acc1.getname() << "balance : " << acc1.getbalance() << endl;

    acc2.debit(200);
    cout << "After debiting 200, " << acc2.getname() << "balance : " << acc2.getbalance() << endl;

    acc1.transfert(acc2, 400);
    cout << "After transferring 400:" << endl;
    cout << acc1.getname() << "balance : " << acc1.getbalance() << endl;
    cout << acc2.getname() << "balance : " << acc2.getbalance() << endl;

    // ----------------------------
    // Q4
    Time time(23, 59, 59);

    Time temp = time;

    cout << "Current time: ";
    time.display();

    time.nextsecond();
    cout << "After advancing 1 second: ";
    time.display();

    temp.presecond();
    cout << "After going back 1 second: ";
    temp.display();
}