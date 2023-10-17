#include <iostream>
using namespace std;

// Base class
class Animal {
   public:
    void eat() {
        cout << "I can eat!" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
   public:
    void bark() {
        cout << "I can bark!" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
   public:
    void meow() {
        cout << "I can meow!" << endl;
    }
};

int main() {
    // Creating objects of derived classes
    Dog dog;
    Cat cat;

    // Calling methods of base class and derived classes
    dog.eat();
    dog.bark();

    cat.eat();
    cat.meow();

    return 0;
}
