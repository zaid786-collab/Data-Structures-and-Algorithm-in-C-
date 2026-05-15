#include<bits/stdc++.h>
using namespace std;

int fact(int a){
    if(a==0){
        return 1;
    }
    return a*fact(a-1);
}

int main(){
    int n;
    cout<<"Enter number of Factorial : ";
    cin>>n;
    int i = fact(n);

    cout<<"Factorial of number is : "<<i<<endl;
    return 0;
}
