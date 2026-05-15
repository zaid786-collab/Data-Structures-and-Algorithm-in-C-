#include<bits/stdc++.h>
using namespace std;



// int fact(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     else{
//         return n*fact(n-1);
//     }
// }

// int main(){
//     cout<<fact(6);
//     return 0;
// }

// int reve(string i,int start,int end){
// if(start==end){
//     return 0;
//     }
// else{

// }
// }

// int main(){
//     string s = "CODING";
//     reve(s,0,s.length()-1);
//     return 0;
// }


int fibo(int n){
    if(n==0||n==1) return n;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    cout<<fibo(7);
    return 0;
}
