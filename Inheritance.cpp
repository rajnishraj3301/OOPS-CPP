#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Base class constructor
    Animal() {
        cout << "Animal class constructor" << endl;
    }
    
    // Member function of the base class
    void eat() {
        cout << "This animal eats food." << endl;
    }
    
    // Virtual function (can be overridden by derived class)
    virtual void sound() {
        cout << "This animal makes a sound." << endl;
    }
    
    // Base class destructor
    virtual ~Animal() {
        cout << "Animal class destructor" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Constructor of the derived class
    Dog() {
        cout << "Dog class constructor" << endl;
    }
    
    // Overriding the sound function in derived class
    void sound() override {
        cout << "The dog barks!" << endl;
    }
    
    // Destructor of the derived class
    ~Dog() {
        cout << "Dog class destructor" << endl;
    }
};

int main() {
    // Creating an object of the derived class
    Dog d;
    d.eat();  // Inherited function from Animal class
    d.sound();  // Overridden function in Dog class

    return 0;
}
