#include<iostream>
using namespace std;
int main(){
    int arr[6] = {7,1,5,3,6,4};
    int min = arr[0];
    int index = 0;
    int max = 0;
    for(int i=1;i<6;i++){
        if(arr[i]<min){
            min = arr[i];
            index = i;
        }
    }
    for(int j=index;j<6-index;j++){
        if(arr[j]>max){
            max = arr[j];
        }
    }
    cout<<"MAX PROFIT IS : "<<max-min;


    return 0;
}