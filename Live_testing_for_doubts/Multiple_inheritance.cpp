#include <iostream>

// Base class 1
class Shape {
public:
    virtual void draw() = 0;
};

// Base class 2
class Color {
public:
    virtual void fill() = 0;
};

// Derived class that inherits from both Shape and Color
class Rectangle : public Shape, public Color {
public:
    void draw() {
        std::cout << "Drawing a rectangle" << std::endl;
    }

    void fill() {
        std::cout << "Filling the rectangle with color" << std::endl;
    }
};

int main() {
    Rectangle rect;
    rect.draw();
    rect.fill();

    return 0;
}
