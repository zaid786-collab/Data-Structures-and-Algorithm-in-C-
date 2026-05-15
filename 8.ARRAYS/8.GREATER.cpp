#include<iostream>
using namespace std;
int main(){
    int arr[] = {11,6,9,7,23,5,6,19};
    int count = 0;
    int n;
    cout<<"ENTER AN ELEMENT AS A CRITERIA : ";
    cin>>n;
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<8;i++){
        if(arr[i]>n){
            count = count + 1;
        }
    }
    cout<<"NUMBER THAT ARE GREATER THEN "<<n<<" IN AN GIVEN ARRAY IS : "<<count;
    return 0;
}