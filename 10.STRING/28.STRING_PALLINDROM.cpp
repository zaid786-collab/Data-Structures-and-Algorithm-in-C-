#include<bits/stdc++.h>
using namespace std;
int main(){
    string str0;
    cin>>str0;
    string a = str0;
    reverse(str0.begin(),str0.end());
    if(a == str0){
        cout<<"Pallindrom"<<endl;
    }
    else{
        cout<<"Not a Pallindrom"<<endl;
    }
    return 0;
}