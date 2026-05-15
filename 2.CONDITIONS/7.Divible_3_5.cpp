#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number :";
    cin>>x;
    if(x%3==0 and x%5==0){
        cout<<x<<" is divisible by both 3 and 5.";
    }
    else{
        cout<<x<<" is not divisible by 3 abd 5.";
    }  
    
    


    return 0;
}