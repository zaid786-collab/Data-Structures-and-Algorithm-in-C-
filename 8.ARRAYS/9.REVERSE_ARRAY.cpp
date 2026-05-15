#include<iostream>
using namespace std;
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int brr[7];
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"ARRAY IN REVERE ORDER : \n";
    int j = 0;
    for(int i=6;i>=0;i--){
        brr[j] = arr[i];
        cout<<brr[j]<<" ";
        j = j + 1;
    }

    return 0;
}