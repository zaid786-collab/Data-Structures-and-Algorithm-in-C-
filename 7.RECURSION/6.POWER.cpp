#include<iostream>
using namespace std;
int pow(int u,int i){
    if(i==0){
        return 1;
    }
    return u*pow(u,i-1);
}
int main(){
    int n;
    cout<<"ENTER A BASE NUMBER : ";
    cin>>n;
    int c;
    cout<<"ENTER THE POWER VALUE : ";
    cin>>c;
    // pow(n,c);
    cout<<"NUMBER "<<n<<" RAISED TO THE POWER "<<c<<" IS : "<<pow(n,c);
    return 0;
}