#include<iostream>
using namespace std;

void check(int n,int m,int i){
    if(n>m && n>i){
        cout<<n<<" is largest of three numbers.";
    }
    else if(m>n && m>i){
        cout<<m<<" is largest of three numbers.";
    }
    else{
        cout<<i<<" is largest of three numbers.";
    }
}

int main(){
    int a,b,c;
    cout<<"Enter the 1st number : ";
    cin>>a;
    cout<<"Enter the 2nd number : ";
    cin>>b;
    cout<<"Enter the 3rd number : ";
    cin>>c;
    check(a,b,c);
    return 0;
}