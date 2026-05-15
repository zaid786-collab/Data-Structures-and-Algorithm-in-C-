#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows to be built in a triangle(must be greter then 6) : ";
    cin>>n;
    if(n>=6){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Enter value more then 6.";
    }
    return 0;
}