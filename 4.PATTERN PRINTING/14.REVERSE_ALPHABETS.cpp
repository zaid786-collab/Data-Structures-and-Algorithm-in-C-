#include<iostream>
using namespace std;
int main(){
    cout<<"REVERSE TRIANGLE \n";
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4+1-i;j++){
            cout<<char(j+64)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}