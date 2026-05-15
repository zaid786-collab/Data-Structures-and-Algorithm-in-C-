#include<iostream>
using namespace std;

void next(char ch){
    int a = int(ch);
    if(a>=65 && a<=122){
        if(a==122){
            cout<<char(97);
        }
        else{
            cout<<char(a+1);
        }
    }
    else{
        cout<<"Invalid entry.";
    }
}

int main(){
    char s;
    cout<<"Enter a charecter : ";
    cin>>s;
    next(s);

    return 0;
}