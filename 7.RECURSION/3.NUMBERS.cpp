#include<iostream>
using namespace std;
int numbers(int n){
    if(n==20){    // BASE CASE
        return 0;
    }
    cout<<n<<"\n"; // WORK
    numbers(n+1);  // CALL
}
int main(){
    numbers(1);
    return 0;
}