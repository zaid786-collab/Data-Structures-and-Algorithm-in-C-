#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows in a triangle : ";
    cin>>n;
    int r = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            r = r + 1;
            cout<<r<<" ";
        }
        cout<<endl;
    }
    return 0;
}