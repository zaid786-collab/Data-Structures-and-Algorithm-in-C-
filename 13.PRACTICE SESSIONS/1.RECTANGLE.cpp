#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"Enter number of rows in a rectangle : ";
    cin>>n;
    cout<<"Enter number of coloumns in a rectanle : ";
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}