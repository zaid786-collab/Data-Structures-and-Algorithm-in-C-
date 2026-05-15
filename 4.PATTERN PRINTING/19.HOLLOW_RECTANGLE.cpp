#include<iostream>
using namespace std;
int main(){
    cout<<"HOLLOW RECTANGLE : \n";
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            if(j==1 || j==6 || i==1 || i==6){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}