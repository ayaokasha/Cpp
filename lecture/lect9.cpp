#include <iostream>
#include <string>
using namespace std;

// virtual
// abstract class
// class Shape
// {
// protected:
//     int height;

// public:
//     Shape() { height = 10; }
//     Shape(int h) : height(h) {}
//     virtual int gethight() = 0; // to accsses pointer/pure virtual function
// };
// class Circle : public Shape
// {
// protected:
//     int radius;

// public:
//     Circle() { radius = height / 2; }
//     int getradius() const { return 3.14 * radius * radius; }
// };
// class Rectangle : public Shape
// {
// protected:
//     int width;

// public:
//     Rectangle() { width = 20; }
//     Rectangle(int w) { width = w; }
//     int getarea()const{}
// };

// EX1
// class Movable
// {
// public:
//     Movable() {}
//     virtual void moveup() = 0;
//     virtual void movedown() = 0;
//     virtual void moveleft() = 0;
//     virtual void moveright() = 0;
// };
// class Movablepoint : public Movable
// {
//     int x, y, xspeed, yspeed;

// public:
//     Movablepoint() {}
//     Movablepoint(int a, int b, int c, int d) : x(a), y(b), yspeed(c), xspeed(d) {}
//     void moveup() { y -= yspeed; }
//     void movedown() { y += yspeed; }
//     void moveleft() { x -= xspeed; }
//     void moveright() { x += xspeed; }
// };
// Q1
// class Animal
// {
// public:

//     Animal() {}
//     virtual void showtype() = 0;
// };
// class Dolphin : public Animal
// {
//     string type;

// public:
//     Dolphin(string t) : type(t) {}
//     void showtype() { cout << "Dolphin\n"; }
// };
// class Cat : public Animal
// {
//     string type;

// public:
//     Cat(string t) : type(t) {}
//     void showType() { cout << "Cat\n"; }
// };
// class Dog : public Animal
// {
//     string type;

// public:
//     Dog(string t) : type(t) {}
//     void showType() { cout << "Dog\n"; }
// };

// template
// template <typename t>
// t sum(t a, t b)
// {
//     return a + b;
// }

template <typename t>
class cal
{
    t y;
    t x;

public:
    cal() {}
    cal(t y, t x)
    {
        y = y;
        x = x;
    }
    t sum(t a, t b)
    {
        return a + b;
    }
};
int main()
{
    // Shape *ptr = new Rectangle;
    // Movable *ptr = new Movablepoint;
    // Animal *ptr = new Dolphin;
    // ptr->showtype();
    // Animal *ptr = new Dog;
    // ptr->showtype();
    // Animal *ptr = new Cat;
    // ptr->showtype();
    // template
    // cout << sum<float>(9.8, 5.5);
    int x = 10, y = 9;
    cal<int> c(10, 9);
    cout << c.sum(x, y) << endl;
    cal<float> c2(10.0, 9.5);
    cout << c2.sum(1.3, 9.5);
}
