#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number of terms in an A.P : ";
    cin>>x;
    cout<<"\nThe A.P is : ";
    for(int i=1;i<=x*2-1;i=i+2){
        cout<<i<<" ";
    }
    return 0;
}