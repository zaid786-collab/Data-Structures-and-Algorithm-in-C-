#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i=1;i<=x;i++){
        f = f * i;
    }
    return f;
}

int main(){
    cout<<"COMBINATION OF A NUMBER : \n";
    int n;
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>n;
    int r;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin>>r;
    int a = fact(n);
    int c = fact(n-r);
    cout<<"COMBINATION IS : "<<a/(c);
}