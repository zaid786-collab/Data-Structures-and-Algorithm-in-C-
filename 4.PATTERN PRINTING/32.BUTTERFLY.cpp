#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int o=1;o<=i;o++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int z=1;z<=i;z++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int o=1;o<=i;o++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int z=1;z<=i;z++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}