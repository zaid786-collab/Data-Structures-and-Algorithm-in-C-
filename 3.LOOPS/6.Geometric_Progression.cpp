#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number of terms is an G.P : ";
    cin>>x;
    int a = 1;
    for(int i=1;i<=x;i=i+1){
        a = a*2;
        cout<<a<<" ";
    }
    return 0;
}