#include <iostream>
using namespace std;

// Q1
// A.encapsulation: collect all the data members and member functions in a single class
// B.Abstraction: hide the implementation details from the user and only show the necessary details
// C.polymorphism: allowing methods to take many forms based on the object
// D.inheritance: allows a class(child) to inherit the properties and behavior of another class(perant)

// Q2
// A.public: members are accessible from outside the class
// B.private (default): members are only accessible within the class unless a friend function is used
// C.protected: members are accessible from the class and child classes

// Q3
double divide(double a, double b)
{
    if (b == 0)
    {
        throw "Division by zero";
    }
    return a / b;
}

// Q4
template <class T>
T add(T a, T b)
{
    return a + b;
}

// Q5
// A.overloading:
// defining multiple functions with the same name but different parameters
// must have different parameters
// used in the same class
// used for functions and operators

// B.overriding:
// defining a function in the child class that is already defined in the parent class
// must have the same name, parameters, and return type
// must be a virtual function
// used in inheritance (parent and child classes)
// used to provide a specific implementation of a function in the child class

// Q6
class Point2D
{
protected:
    float x = 0.0;
    float y = 0.0;

public:
    Point2D(float x, float y)
    {
        this->x = x;
        this->y = y;
    }
    Point2D() {}
    float getX() { return x; }
    float getY() { return y; }
    float *getXY()
    {
        static float arr[2] = {x, y};
        return arr;
    }
    void setX(float x) { this->x = x; }
    void setY(float y) { this->y = y; }
    void setXY(float x, float y)
    {
        this->x = x;
        this->y = y;
    }
};
class Point3D : public Point2D
{
    float z = 0.0;

public:
    Point3D(float x, float y, float z) : Point2D(x, y)
    {
        this->z = z;
    }
    Point3D() {}
    float getZ() { return z; }
    void setZ(float z) { this->z = z; }
    float *getXYZ()
    {
        static float arr[3] = {x, y, z};
        return arr;
    }
    void setXYZ(float x, float y, float z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
};
int main()
{
    // Q3
    try
    {
        cout << "Result: " << divide(10, 2) << endl;
        cout << "Result: " << divide(10, 0) << endl;
    }
    catch (const char *m)
    {
        cout << "Error: " << m << endl;
    }
    cout << "-------------------" << endl;

    // Q4
    cout << add(10, 5) << endl;
    cout << add(10.5, 5.3) << endl;
    cout << "-------------------" << endl;
    // Q6
    Point2D p1(1.5, 2.5);
    Point3D p2(1.5, 2.5, 3.5);
    float *arr = p1.getXY();
    cout << "Point2D: " << arr[0] << ", " << arr[1] << endl;
    float *arr2 = p2.getXYZ();
    cout << "Point3D: " << arr2[0] << ", " << arr2[1] << ", " << arr2[2] << endl;
}