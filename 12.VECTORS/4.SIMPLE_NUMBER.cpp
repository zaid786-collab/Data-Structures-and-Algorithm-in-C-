#include<iostream>
#include<vector>
using namespace std;
int main(){
    // C++ CONTAINERS LIKE VECTOR ARE PASS BY VALUE BY DEFAULT IN A FUNCTION TO MADE THEM PASS BY REFERENCE WE PUT & SIGN WITH THEM.
    vector<int>num ={9,5,2,1,6,7,8,3};
    int x;
    cout<<"ENTER A NUMBER TO BE SEARCHED : ";
    cin>>x;
    int check = 0;
    for(int i=0;i<=7;i++){
        if(x == num[i]){
            cout<<"NUMBER "<<x<<" IS FOUNDED AT INDEX "<<i<<endl;
            check = 1;
            break;
        }
    }
    if(check==0){
        cout<<"NUMBER DO NOT EXIST IN AN VECTOR.";
    }
    return 0;
}