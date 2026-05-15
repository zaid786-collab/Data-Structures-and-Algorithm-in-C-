#include<iostream>
using namespace std;
int greet(int n){
    // BASE CASE : 
    if(n==0){
        return 0;
    }
    cout<<"HELLO WORLD!!"<<"\n";
    greet(n-1);
}
int main(){
    // RECURSION : FUNCTION CALLING ITSELF.
    greet(5);
    return 0;
}