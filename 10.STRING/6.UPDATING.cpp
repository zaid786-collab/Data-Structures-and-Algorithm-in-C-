#include<iostream>
using namespace std;
int main(){
    string o = "HELLO JAPAN, MOHAMMAD ZAID KHAN THIS SIDE.";
    cout<<"STRING IS : "<<o;
    for(int i=0;i<o.length();i++){
        if(i%2==0){
            o[i] = 'a';
        }
    }
    cout<<"\nTHE UPDATED STRING IS : "<<o;
    return 0;
}