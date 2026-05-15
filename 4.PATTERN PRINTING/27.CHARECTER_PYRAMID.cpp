#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number of rows : ";
    cin>>n;
    int o = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            o = o + 1;
            cout<<char(64 + o)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}