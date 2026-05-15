#include<iostream>
using namespace std;

int main(){
    int x = 11;
    cout<<"Pre-increment and Post-increment Operators:\n";
    cout<<"Initial value of x: " << x << "\n";
    // In Pre-increment, the value is incremented before it is returned
    cout<<"Value of x after pre-increment: " << ++x << "\n";
    // In Post-increment, the value is returned before the increment
    cout<<"Value of x after post-increment: " << x++ << "\n";
    cout<<"Final value of x: " << x << "\n";
    return 0;
}