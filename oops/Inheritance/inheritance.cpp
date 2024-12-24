#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Non-pure virtual function (optional)
    virtual void displayType() {
        cout << "This is a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    shape1->draw();        // Output: Drawing a Circle
    shape2->draw();        // Output: Drawing a Rectangle

    delete shape1;
    delete shape2;

    return 0;
}