#include<iostream>
using namespace std;
int main(){
    cout<<"MIX TRIANGLE : \n";
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                cout<<char(64+j)<<" ";
            }
            else{
                cout<<j<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}