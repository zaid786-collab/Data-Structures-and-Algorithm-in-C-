#include<iostream>
using namespace std;
int main(){
    cout<<"ALTERNATE NUMBER TRIANGLE : \n";
    
    for(int i=1;i<=4;i++){
        int x = 0;
        for(int j=1;j<=i;j++){
            cout<<j+x<<" ";
            x = x + 1;
        }
        cout<<"\n";
    }
    return 0;
}