#include<iostream>
using namespace std;
int main(){
    cout<<"NUMBER TRIANGLE : \n";
    int a = 1;
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            cout<<a<<" ";
            a = a + 1;
        }
        cout<<"\n";
    }
    return 0;
}