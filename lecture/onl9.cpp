#include <iostream>
using namespace std;

// class Movable
// {
// public:
//     virtual void moveup() = 0;
//     virtual void movedown() = 0;
//     virtual void moveleft() = 0;
//     virtual void moveright() = 0;
//     virtual int getx() = 0;
//     virtual int gety() = 0;
// };

// class Movepoint : public Movable
// {
//     int x, y, x_speed, y_speed;

// public:
//     Movepoint()
//     {
//         x = y = 10;
//         x_speed = y_speed = 100;
//     }
//     Movepoint(int a, int b, int c, int d)
//         : x(a), y(b), x_speed(c), y_speed(d) {}

//     int getx() { return x; }
//     int gety() { return y; }

//     void moveup() { y -= y_speed; }
//     void movedown() { y += y_speed; }
//     void moveleft() { x -= x_speed; }
//     void moveright() { x += x_speed; }
// };

// int main()
// {
//     Movable *ptr = new Movepoint;
//     ptr->moveup();
//     ptr->movedown();
//     ptr->moveright();
//     cout << ptr->getx() << endl;
//     cout << ptr->gety() << endl;

//     delete ptr;
// }
// -----------------
template <typename t>
t sum(t a, t b)
{
    return a + b;
}

int main()
{
    cout << sum<int>(8, 9);
}