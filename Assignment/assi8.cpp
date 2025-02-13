#include <iostream>
#include <string>
using namespace std;
// Q1
class Animal
{
protected:
    string name;

public:
    Animal(string name) : name(name) {}
    virtual void animaltype() const = 0;
    virtual ~Animal() {}
};
class Cat : public Animal
{
public:
    Cat(string name) : Animal(name) {}
    void animaltype() const override { cout << "Meow\n"; }
};
class Dog : public Animal
{
public:
    Dog(string name) : Animal(name) {}
    void animaltype() const override { cout << "Woof\n"; }
    void animaltype(const Dog &another) const { cout << "Woooof\n"; }
};
class BigDog : public Dog
{
    BigDog(string name) : Dog(name) {}
    void animaltype() const override { cout << "Woow\n"; }
    void animaltype(const Dog &another) const { cout << "Woooow\n"; }
    void animaltype(const BigDog &another) const { cout << "Wooooooow\n"; }
};
//----------------------------------------------------------
// Q2
class Vehicle
{
protected:
    string model;
    string registration;
    int speed;
    double fcapacity;
    double fconsumption;

public:
    Vehicle(string m, string r, int s, double fcap, double fcon)
        : model(m), registration(r), speed(s), fcapacity(fcap), fconsumption(fcon) {}
    virtual void display()
    {
        cout << "Vehicle Model: " << model << endl;
        cout << "Registration Number: " << registration << endl;
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Fuel Capacity: " << fcapacity << " liters" << endl;
        cout << "Fuel Consumption: " << fconsumption << " liters/km" << endl;
    }
    virtual ~Vehicle() {}
};
class Truck : public Vehicle
{
    double cargoweight;

public:
    Truck(string m, string r, int s, double fcap, double fcon, double car)
        : Vehicle(m, r, s, fcap, fcon)
    {
        cargoweight = car;
    }
    void setcargoweight(double limit) { cargoweight = limit; }
    double getcargoweight() const { return cargoweight; }
    void display() override
    {
        Vehicle::display();
        cout << "Cargo Weight Limit: " << cargoweight << " kg" << endl;
    }
};
class Bus : public Vehicle
{
    int passengers;

public:
    Bus(string m, string r, int s, double fcap, double fcon, int pas)
        : Vehicle(m, r, s, fcap, fcon)
    {
        passengers = pas;
    }
    void setpassengers(int pas) { passengers = pas; }
    int getpassengers() const { return passengers; }
    void display() override
    {
        Vehicle::display();
        cout << "Number of Passengers: " << passengers << endl;
    }
};
int main()
{
    // Cat cat("kitty");
    // Dog dog("freska");
    // BigDog bigdog("max");
    // cat.animaltype();
    // dog.animaltype();
    // bigdog.animaltype();
    //-----------------------
    // Q2
    Truck mytruck("Volvo", "TR12345", 120, 300.5, 0.8, 15000);
    Bus mybus("Mercedes", "BS67890", 100, 200.0, 0.5, 50);

    cout << "Truck Details:" << endl;
    mytruck.display();
    cout << endl;

    cout << "Bus Details:" << endl;
    mybus.display();
}