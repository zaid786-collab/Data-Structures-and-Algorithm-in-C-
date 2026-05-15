#include<iostream>
using namespace std;

void out(int arr[],int value,int start,int max_value){
    for(int i=0;i<6;i++){
        value = 0;
        for(int j=start;j<6;j++){
            value = value + arr[j];
            cout<<value<<" ";
            max_value = max(max_value,value);
        }
        start = start + 1;
        cout<<endl;
    }
    cout<<"MAX SUM : "<<max_value<<endl;
}

int main(){
    int arr[6] = {2,-3,6,-5,4,2};

    int value = 0;
    int start = 0;
    int max_value = INT8_MIN;
    out(arr,value,start,max_value);
    return 0;
}