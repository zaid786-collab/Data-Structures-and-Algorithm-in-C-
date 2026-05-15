#include<iostream>
using namespace std;
int main(){
    // for(int i=1;i%3!=0 || i%5!=0;i++){
    //     cout<<i<<" ";
    // }
    // cout<<"\n";
    // for(int o=1;o%3!=0 && o%5!=0;o++){
    //     cout<<o<<" ";
    // }
    // cout<<"\n";
    // cout<<(5%3==0 && 5/0==10);

    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // int num,sum;
    // cout<<"Enter a three digit number : ";
    // cin>>num;
    // int d1 = num%10;
    // num = num/10;
    // int d2 = num%10;
    // num = num/10;
    // sum = d1 + d2 + num;
    // cout<<"Sum of digits : "<<sum;

    // int num;
    // int Sum = 0;
    // cout<<"Enter a number : ";
    // cin>>num;
    // for(int i=0;i<4;i++){
    //     Sum = Sum + num%10;
    //     cout<<Sum<<" ";
    //     num = num/10;
    // }
    // cout<<"Sum of digits is : "<<sum;/

    // int n,last_digit;
    // int digit_sum = 0;
    // cout<<"Enter a number ";
    // cin>>n;
    // while(n>0){
    //     last_digit = n % 10;
    //     digit_sum = digit_sum + last_digit; 
    //     n = n /10;
    // }
    // cout<<"Sum of digits is : "<<digit_sum;

    // ODD NUMBERS SUM : 

    // int n;
    // int digit = 0;
    // int num_sum = 0;
    // cout<<"Enter a number : ";
    // cin>>n;
    // while(n>0){
    //     digit = n % 10;
    //     if(digit%2 != 0){
    //         num_sum = num_sum + digit;
    //     }
    //     n = n / 10;
    // }
    // cout<<"Sum of odd numbers : "<<num_sum;

    // REVERSE OF A NUMBER : 

    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a = n;
    int reverse = 0;
    int digit = 0;
    while(n>0){
        digit = n % 10;
        reverse = reverse*10 + digit;
        n = n / 10;
    }
    cout<<"Reverse of a number : "<<a<<" is : "<<reverse;


    return 0;
}