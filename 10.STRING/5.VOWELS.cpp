#include<iostream>
using namespace std;
int main(){
    string a = "HELLO WORLD,MOHAMMAD ZAID KHAN THIS SIDE I AM A FRONEND PYTHON DEVLOPER.";
    cout<<"STRING : "<<a;
    int count = 0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
            count = count + 1;
        }
    }
    cout<<"\nTHE NUMBER OF VOWELS IN AN STRING IS : "<<count;

    return 0;
}