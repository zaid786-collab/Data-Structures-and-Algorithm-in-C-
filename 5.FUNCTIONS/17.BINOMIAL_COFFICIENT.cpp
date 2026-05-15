#include<iostream>
using namespace std;

int coeff(int n) {
    int factn = 1;
    for (int i = 1; i <= n; i++) {
        factn = factn * i;
    }
    return factn;
}

int bio(int n, int r) {
    int a = coeff(n);
    int b = coeff(r);
    int c = coeff(n - r);

    int result = a / (b * c);
    return result;
}

int main() {
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r (should be less than n): ";
    cin >> r;

    if (r > n) {
        cout << "Incorrect Input.";
    } else {
        cout << "The binomial coefficient (nCr) is: " << bio(n, r);
    }

    return 0;
}
