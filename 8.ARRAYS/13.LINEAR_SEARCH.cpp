#include<iostream>
using namespace std;

int linear(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,4,6,8,11,12,14,16};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Index is : "<<linear(arr,n,10)<<endl;
    return 0;
}

/*
1) Time complexity is basically a relation between input size[arr here] and number of operation on it,as the size of array increses here operation on it also increses.

2) Time complexity is also known as liner time complexity as there is an linear increment in operations as size of an input increses.

3) It is also known as O(n) complexity,with straight graph of y = x + c obtained.

4) Linear search can be applied on any array.
*/