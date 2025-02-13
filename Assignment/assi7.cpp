#include <iostream>
#include <string>
using namespace std;

// Q1
class Circle
{
protected:
    double radius;
    string color;

public:
    Circle() { radius = 1.0, color = "red"; }
    Circle(double r) : radius(r) {}
    Circle(double r, string c) : radius(r), color(c) {}
    double getradius() { return radius; }
    string getcolor() { return color; }
    void setradius(double r) { radius = r; }
    void setcolor(string c) { color = c; }
    double getarea() { return 3.14 * radius * radius; }
    virtual void display_info() { cout << "Circle: Radius = " << radius
                                       << ", Color = " << color
                                       << ", Area = " << getarea() << endl; }
};
class Cylinder : public Circle
{
    double height;

public:
    Cylinder() { height = 1; }
    Cylinder(double r) : Circle(r) {}
    Cylinder(double r, double h) : Circle(r) { height = h; }
    Cylinder(double r, double h, string c) : Circle(r, c) { height = h; }
    double gethight() { return height; }
    double getvolume() { return getarea() * height; }
    void sethight(double h) { height = h; }
    void display_info()
    {
        cout << "Cylinder: Radius = " << radius
             << ", Height = " << height
             << ", Color = " << color
             << ", Volume = " << getvolume() << endl;
    }
};
//-----------------------------------------------------------------
// Q2

class Customer
{
protected:
    int id;
    string name;
    int discount;

public:
    Customer() {}
    Customer(int i, int d, string n) : id(i), name(n), discount(d) {}
    int getid() const { return id; }
    string getname() const { return name; }
    int getdiscount() const { return discount; }
    void setdiscount(int d) { discount = d; }
    void display_info() const { cout << "Cousomer id : " << id << endl
                                     << "Cousomer name : " << name << endl
                                     << "Discount : " << discount << "%" << endl; }
};
class Invoice
{
    int invoice_id;
    Customer customer;
    double amount;

public:
    Invoice() {}
    Invoice(int ii, Customer &c, double a)
    {
        invoice_id = ii;
        customer = c;
        amount = a;
    }
    int geinvoice_id() const { return invoice_id; }
    Customer getcustomer() const { return customer; }
    double getamount() const { return amount; }
    double getafterdiscount() const { return amount * (1 - customer.getdiscount() / 100.0); }
    void setcustomer(Customer c) { customer = c; }
    void setamount(double a) { amount = a; }
    void display_info() const

    {
        cout << "Invoice ID: " << invoice_id << endl
             << "Amount: " << amount << endl
             << "Customer: " << customer.getname() << endl
             << "Discount: " << customer.getdiscount() << "%" << endl
             << "Amount After Discount: " << getafterdiscount() << endl;
    }
};
//-----------------------------------------------------------------
// Q3

class Person
{
protected:
    string firstname;
    string lastname;

public:
    Person() {}
    Person(string f, string l) : firstname(f), lastname(l) {}
    string getfname() const { return firstname; }
    string getlname() const { return lastname; }
    void setname(string f, string l)
    {
        firstname = f;
        lastname = l;
    }
    void display_info() const
    {
        cout << "Name : " << firstname << " "
             << lastname << endl;
    }
};

class Doctor : public Person
{
protected:
    string speciality;

public:
    Doctor() {}
    Doctor(string f, string l, string s)
        : Person(f, l), speciality(s) {}
    void setspeciality(string s) { speciality = s; }
    string getspeciality() const { return speciality; }
    void display_doc() const
    {
        Person::display_info();
        cout << "Speciality: " << speciality << endl;
    }
};

class Date
{
protected:
    int dmonth;
    int dday;
    int dyear;

public:
    Date() : dmonth(1), dday(1), dyear(2000) {}
    Date(int m, int d, int y) : dmonth(m), dday(d), dyear(y) {}
    void setDate(int m, int d, int y)
    {
        dmonth = m;
        dday = d;
        dyear = y;
    }
    int getmonth() const { return dmonth; }
    int getday() const { return dday; }
    int getyear() const { return dyear; }
    void display_date() const
    {
        cout << dmonth << "/" << dday << "/" << dyear << endl;
    }
};
class Patient
{
protected:
    int patientid;
    int age;
    Date dob;
    Date admitdate;
    Date dischargedate;
    Doctor physician;

public:
    Patient(int id, int age, Date &dob, Date &admit, Date &discharge, Doctor &doc)
        : patientid(id), age(age), dob(dob), admitdate(admit), dischargedate(discharge), physician(doc) {}
    Date getadmitdate() const { return admitdate; }
    void setdischargedate(Date &disdate) { dischargedate = disdate; }
    Date getdischargedate() const { return dischargedate; }
    void setphysician(Doctor doc) { physician = doc; }
    Doctor getphysician() const { return physician; }
    void display() const
    {
        cout << "Patient ID: " << patientid << endl;
        cout << "Age: " << age << endl;
        cout << "Date of Birth: ";
        dob.display_date();
        cout << "Admit Date: ";
        admitdate.display_date();
        cout << "Discharge Date: ";
        dischargedate.display_date();
        cout << "Physician Info: " << endl;
        physician.display_doc();
    }
};
//-----------------------------------------------------------------
// Q4
// Composition the car(has a)engine
// if somthing has changed in the parent class does not affect the child class

class Engine
{
protected:
    int horsepower;
    string type;

public:
    Engine() {}
    Engine(int hp, string t) : horsepower(hp), type(t) {}
    void setengine(int hp, string t)
    {
        horsepower = hp;
        type = t;
    }
    void display() const
    {
        cout << "Engine Horsepower: " << horsepower << endl;
        cout << "Engine Type: " << type << endl;
    }
};
class Car
{
protected:
    string brand;
    string model;
    Engine engine;

public:
    Car() {}
    Car(string b, string m, Engine e) : brand(b), model(m), engine(e) {}
    void setcae(string b, string m, Engine e)
    {
        brand = b;
        model = m;
        engine = e;
    }
    void displaycar() const
    {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
        engine.display();
    }
};

// Inheritance the Student(is a)person
// changing in the parent class affect the child classes
class Person1
{
protected:
    int age;
    string name;

public:
    Person1() {}
    Person1(int a, string n) : age(a), name(n) {}
    void setperson(int a, string n)
    {
        age = a;
        name = n;
    }
    void display() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person1
{
protected:
    string major;
    double gpa;

public:
    Student() {}
    Student(int a, string n, string m, double g)
        : Person1(a, n), major(m), gpa(g) {}
    void setstudint(int a, string n, string m, double g)
    {
        setperson(a, n);
        major = m;
        gpa = g;
    }
    void displaystudint() const
    {
        display();
        cout << "Major: " << major << endl;
        cout << "GPA: " << gpa << endl;
    }
};
int main()
{
    // Q1
    // Circle c1(5, "pink");
    // c1.display_info();
    // Cylinder cy1(5, 10, "blue");
    // cy1.display_info();
    // --------------------------
    // Q2
    Customer c1(1, 10, "Aya");
    Invoice inv1(101, c1, 200.0);
    c1.display_info();
    inv1.display_info();
    //---------------------
    // Q3
    Doctor doc("aya", "okasha", "Cardiology");
    Date dob(5, 5, 2000);
    Date admit(12, 1, 2024);
    Date discharge(12, 15, 2024);

    Patient patient(101, 24, dob, admit, discharge, doc);

    patient.display();
    // ----------------------
    // Q4
    // Composition
    Engine engine1(300, "V8");
    Car car1("Toyota", "Supra", engine1);
    car1.displaycar();

    // Inheritance
    Student student(20, "ahmed", "Computer Science", 3.8);
    student.displaystudint();
}