#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<" element of an array : ";
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int max = arr[0];
    int min = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"MAXIMUM VALUE IS : "<<max<<endl;
    cout<<"MINIMUM VALUE IS : "<<min;
    return 0;
}