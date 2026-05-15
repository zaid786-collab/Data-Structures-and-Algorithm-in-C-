#include<iostream>
using namespace std;
int number(int n){
    if(n == 0){ 
        return 0;
    }
    cout<<n<<"\n";
    number(n-1);
}
int main(){
    number(9);
    return 0;
}