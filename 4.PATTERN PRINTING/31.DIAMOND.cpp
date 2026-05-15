#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int o=1;o<=n-i;o++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int o=1;o<=2*i-1;o++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}