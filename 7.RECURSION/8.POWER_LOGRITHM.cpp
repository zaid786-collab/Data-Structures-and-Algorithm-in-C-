#include <iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0) return 1;   // a^0 = 1
    if (b == 1) return a;   // a^1 = a

    int half = power(a, b / 2);
    if (b % 2 == 0) {
        return half * half; // if exponent is even
    } else {
        return a * half * half; // if exponent is odd
    }
}

int main() {
    int n, v;
    cout << "ENTER THE BASE VALUE : ";
    cin >> n;
    cout << "ENTER THE POWER VALUE : ";
    cin >> v;

    int ans = power(n, v);
    cout << n << " RAISED TO THE POWER " << v << " IS : " << ans;

    return 0;
}
