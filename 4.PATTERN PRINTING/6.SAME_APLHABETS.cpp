#include<iostream>
using namespace std;
int main(){
    cout<<"ALPHABET SQUARE : \n";
    for(int i=65;i<=68;i++){
        for(int j=0;j<=3;j++){
            cout<<char(i)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}