#include <iostream>
using namespace std;

//------------------- Question 1 -------------------//
// Interface using Abstract Class
class Test {
public:
    virtual int square(int x) = 0;
};

class Arithmetic : public Test {
public:
    int square(int x) {
        return x * x;
    }
};

//------------------- Question 2 -------------------//
// Outer and Inner Class
class Outer {
public:
    void display() {
        cout << "Display of Outer Class" << endl;
    }

    class Inner {
    public:
        void display() {
            cout << "Display of Inner Class" << endl;
        }
    };
};

//------------------- Question 3 -------------------//
// Point Class
class Point {
private:
    int x, y;

public:
    Point() {
        x = 0;
        y = 0;
    }

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void setX(int x) {
        this->x = x;
    }

    void setY(int y) {
        this->y = y;
    }

    void setXY(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void display() {
        cout << "Point = (" << x << ", " << y << ")" << endl;
    }
};

//------------------- Question 4 -------------------//
// Box and Box3D
class Box {
protected:
    int length, breadth;

public:
    Box(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }
};

class Box3D : public Box {
private:
    int height;

public:
    Box3D(int l, int b, int h) : Box(l, b) {
        height = h;
    }

    int volume() {
        return length * breadth * height;
    }
};

//------------------- Main Function -------------------//
int main() {

    // Question 1
    cout << "----- Question 1 -----" << endl;
    Arithmetic a;
    cout << "Square of 5 = " << a.square(5) << endl;

    // Question 2
    cout << "\n----- Question 2 -----" << endl;
    Outer obj;
    obj.display();

    Outer::Inner in;
    in.display();

    // Question 3
    cout << "\n----- Question 3 -----" << endl;
    Point p1;
    p1.display();

    Point p2(10, 20);
    p2.display();

    p1.setXY(5, 15);
    p1.display();

    // Question 4
    cout << "\n----- Question 4 -----" << endl;
    Box b(10, 5);
    cout << "Area = " << b.area() << endl;

    Box3D b3(10, 5, 4);
    cout << "Area = " << b3.area() << endl;
    cout << "Volume = " << b3.volume() << endl;

    return 0;
}