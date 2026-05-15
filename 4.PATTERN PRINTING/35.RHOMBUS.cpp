#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows is a rhombus : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int z=1;z<=n;z++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}