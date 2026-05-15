#include <bits/stdc++.h>
using namespace std;

// Abstract Class
class Shape {
public:
    virtual void draw() = 0;  // Pure Virtual Function
};

class Square : public Shape {
public:
    void draw() {
        cout << "Draw Square\n";
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Draw Circle\n";
    }
};

int main() {
    Square s1;
    s1.draw();

    Circle c1;
    c1.draw();

    // Shape x1;
    // x1.draw();
    return 0;
}


/*
1. A pure virtual function(or abstract function) is a virtual function with no defination/logic.

2. It is declared by assigning 0 at the time of declaration.
    virtual void func() = 0;

3. Class in which the pure virtual Function is declared is know as abstract class,its object can't be build.
*/