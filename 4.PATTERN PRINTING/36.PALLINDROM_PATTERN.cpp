#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows in a pattern : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int z=1;z<=2*i-1;z++){
            int num = abs(i-z) + 1;
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}