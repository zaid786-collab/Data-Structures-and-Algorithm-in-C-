#include<iostream>
using namespace std;
int fact(int x){
    if(x==1){
        return 1;
    }
    return x*fact(x-1);
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER WHOSE FACTORIAL IS NEEDED : ";
    cin>>n;
    fact(n);
    cout<<"FACTORIAL OF "<<n<<" IS : "<<fact(n);
    return 0;
}