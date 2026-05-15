#include<iostream>
using namespace std;
int main(){
    // BREAK STATEMENT : IT JUST EXIST THE LOOP.
    // int n = 1;
    // while(n<10){
    //     if(n==6){
    //         break;
    //     }
    //     cout<<n<<" ";
    //     n++;
    // }
    // cout<<"Out of the loop now.";

    // int a;

    // do{
    //     cout<<"Enter a number : ";
    //     cin>>a;
    //     if(a%10==0){
    //         break;
    //     }
    //     cout<<"Number is : "<<a<<endl;
    // }
    // while(true);

    // CONTINUE : JUST SKIPS AN ITERATION : 

    int a = 1;
    while(a < 10){
        if(a == 4){
            a++;          // increment before continue
        continue;
        }
    cout << a << " ";
    a++;
}

    return 0;
}