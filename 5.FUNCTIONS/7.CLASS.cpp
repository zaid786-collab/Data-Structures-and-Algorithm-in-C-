#include<iostream>
using namespace std;
// int sum(int i,int c){
//     return i+c;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<sum(a,b);
// }

// void compare(int i,int m){
//     i>m ? cout<<"A is greter" : cout<<"B is greter";
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     compare(a,b);
// }

// void printname(){
//     cout<<"hi";
// }
// int main(){
//     cout<<"Hello"<<" ";
//     printname();
//     return 0;
// }
// int sum(){
//     int a,b;
//     cin>>a>>b;
//     return a+b;
// }

// int main(){
//     cout<<"SUM : "<<sum();
//     return 0;
// }
/*
Write a program for factorial via function without argument with return value;
Writa a prog for fibionacci series category function without argument and without return value;
*/
// void fibo(){
//     int first = 0,second = 1;
//     int n = 8;
//     cout<<first<<" "<<second<<" "; 
//         for(int i=0;i<n-2;i++){
//         int next = first + second;
//         cout<<next<<" ";
//         first = second;
//         second = next;
//     }
// } 

// int main(){
//     fibo();
//     return 0;
// }

int fact(){
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;
    int f =1;
        for(int i=n;i>0;i--){
        f=f*i;
    }   
    return f;
} 

int main(){
    cout<<fact();
    return 0;
}