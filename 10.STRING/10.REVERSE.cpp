#include <iostream>
#include <algorithm> // needed for reverse()
using namespace std;

int main() {
    string i = "HELLO WORLD.";
    cout << "STRING IS : " << i;

    reverse(i.begin(), i.end()); // reverse the string in-place

    cout << "\nREVERSE STRING IS : " << i;
    return 0;
}
