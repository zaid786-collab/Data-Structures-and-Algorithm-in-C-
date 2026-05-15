#include<iostream>
using namespace std;
int main(){
    cout<<"NUMBER REVERSE TRIANGLE :\n";
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6-i+1;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    return 0;
}