#include<iostream>
using namespace std;

class temp {
    float celsius;
    float fahrenheit;

public:
    void getdata(void);
    void display(void);
};

void temp::getdata(void) {
    cout << "ENTER TEMPERATURE IN CELSIUS : ";
    cin >> celsius;
    // remove 'float' to assign value to member variable
    fahrenheit = (celsius * 9 / 5) + 32;
}

void temp::display(void) {
    cout << "TEMPERATURE IN FAHRENHEIT : " << fahrenheit << endl;
}

int main() {
    temp t;
    t.getdata();
    t.display();
    return 0;
}
