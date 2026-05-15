#include<iostream>
using namespace std;
int main(){
    cout<<"STAR CROSS : \n";
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==j || i==6-j){
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