#include<iostream>
using namespace std;

int fact(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}

int main() {
    for (int i = 0; i < 5; i++) {
        for(int k=0;k<5-i;k++){
            cout<<" ";
        }
            for (int j = 0; j <= i; j++) {
                int a = fact(i);
                int b = fact(j);
                int c = fact(i - j); 
                cout << a / (b * c) << " ";
            }
            cout << "\n";
    }
}
